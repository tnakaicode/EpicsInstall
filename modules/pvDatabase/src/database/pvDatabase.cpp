/* pvDatabase.cpp */
/**
 * Copyright - See the COPYRIGHT that is included with this distribution.
 * EPICS pvData is distributed subject to a Software License Agreement found
 * in file LICENSE that is included with this distribution.
 */
/**
 * @author mrk
 * @date 2012.11.21
 */

#include <epicsGuard.h>
#define epicsExportSharedSymbols
#include <pv/pvDatabase.h>
#include <pv/pvStructureCopy.h>
#include <pv/pvPlugin.h>
#include <pv/pvArrayPlugin.h>
#include <pv/pvTimestampPlugin.h>
#include <pv/pvDeadbandPlugin.h>

using std::tr1::static_pointer_cast;
using namespace epics::pvData;
using namespace epics::pvCopy;
using namespace std;

namespace epics { namespace pvDatabase {

#define DEBUG_LEVEL 0

static PVDatabasePtr pvDatabaseMaster;

PVDatabasePtr PVDatabase::getMaster()
{
    static bool firstTime = true;
    if(firstTime) {
        firstTime = false;
        pvDatabaseMaster = PVDatabasePtr(new PVDatabase());
        PVArrayPlugin::create();
        PVTimestampPlugin::create();
        PVDeadbandPlugin::create();
    }    
    return pvDatabaseMaster;
}

PVDatabase::PVDatabase()
{
    if(DEBUG_LEVEL>0) cout << "PVDatabase::PVDatabase()\n";
}

PVDatabase::~PVDatabase()
{
    if(DEBUG_LEVEL>0) cout << "PVDatabase::~PVDatabase()\n";
    size_t len = recordMap.size();
    shared_vector<string> names(len);
    PVRecordMap::iterator iter;
    size_t i = 0;
    for(iter = recordMap.begin(); iter!=recordMap.end(); ++iter) {
        names[i++] = (*iter).first;
    }
    for(size_t i=0; i<len; ++i) removeRecord(findRecord(names[i]));
}

void PVDatabase::lock() {
    mutex.lock();
}

void PVDatabase::unlock() {
    mutex.unlock();
}

PVRecordPtr PVDatabase::findRecord(string const& recordName)
{
    epicsGuard<epics::pvData::Mutex> guard(mutex);
    PVRecordMap::iterator iter = recordMap.find(recordName);
    if(iter!=recordMap.end()) {
         return (*iter).second;
    }
    return PVRecordPtr();
}

bool PVDatabase::addRecord(PVRecordPtr const & record)
{
    if(record->getTraceLevel()>0) {
        cout << "PVDatabase::addRecord " << record->getRecordName() << endl;
    }
    epicsGuard<epics::pvData::Mutex> guard(mutex);
    string recordName = record->getRecordName();
    PVRecordMap::iterator iter = recordMap.find(recordName);
    if(iter!=recordMap.end()) {
         return false;
    }
    record->start();
    recordMap.insert(PVRecordMap::value_type(recordName,record));
    return true;
}

bool PVDatabase::removeRecord(PVRecordPtr const & record)
{
    if(record->getTraceLevel()>0) {
        cout << "PVDatabase::removeRecord " << record->getRecordName() << endl;
    }
    epicsGuard<epics::pvData::Mutex> guard(mutex);
    string recordName = record->getRecordName();
    PVRecordMap::iterator iter = recordMap.find(recordName);
    if(iter!=recordMap.end())  {
        PVRecordPtr pvRecord = (*iter).second;
        recordMap.erase(iter);
        return true;
    }
    return false;
}

PVStringArrayPtr PVDatabase::getRecordNames()
{
    epicsGuard<epics::pvData::Mutex> guard(mutex);
    PVStringArrayPtr xxx;
    PVStringArrayPtr pvStringArray = static_pointer_cast<PVStringArray>
        (getPVDataCreate()->createPVScalarArray(pvString));
    size_t len = recordMap.size();
    shared_vector<string> names(len);
    PVRecordMap::iterator iter;
    size_t i = 0;
    for(iter = recordMap.begin(); iter!=recordMap.end(); ++iter) {
        names[i++] = (*iter).first;
    }
    shared_vector<const string> temp(freeze(names));
    pvStringArray->replace(temp);
    return pvStringArray;
}

}}
