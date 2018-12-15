/* THIS IS A GENERATED FILE. DO NOT EDIT! */
/* Generated from ../O.Common/dbTestIoc.dbd */

#include <string.h>
#ifndef USE_TYPED_RSET
#  define USE_TYPED_RSET
#endif
#include "compilerDependencies.h"
#include "epicsStdlib.h"
#include "iocsh.h"
#include "iocshRegisterCommon.h"
#include "registryCommon.h"
#include "recSup.h"

extern "C" {

epicsShareExtern typed_rset *pvar_rset_arrRSET, *pvar_rset_xRSET;

typedef int (*rso_func)(dbRecordType *pdbRecordType);
epicsShareExtern rso_func pvar_func_arrRecordSizeOffset,
    pvar_func_xRecordSizeOffset;

static const char * const recordTypeNames[] = {
    "arr", "x"
};

static const recordTypeLocation rtl[] = {
    {(struct typed_rset *)pvar_rset_arrRSET, pvar_func_arrRecordSizeOffset},
    {(struct typed_rset *)pvar_rset_xRSET, pvar_func_xRecordSizeOffset}
};

epicsShareExtern dset *pvar_dset_devxSoft, *pvar_dset_devxScanIO,
    *pvar_dset_devxLTestJSON_LINK, *pvar_dset_devxLTestVME_IO,
    *pvar_dset_devxLTestCAMAC_IO, *pvar_dset_devxLTestAB_IO,
    *pvar_dset_devxLTestGPIB_IO, *pvar_dset_devxLTestBITBUS_IO,
    *pvar_dset_devxLTestINST_IO, *pvar_dset_devxLTestBBGPIB_IO,
    *pvar_dset_devxLTestRF_IO, *pvar_dset_devxLTestVXI_IO;

static const char * const deviceSupportNames[] = {
    "devxSoft", "devxScanIO", "devxLTestJSON_LINK", "devxLTestVME_IO",
    "devxLTestCAMAC_IO", "devxLTestAB_IO", "devxLTestGPIB_IO",
    "devxLTestBITBUS_IO", "devxLTestINST_IO", "devxLTestBBGPIB_IO",
    "devxLTestRF_IO", "devxLTestVXI_IO"
};

static const dset * const devsl[] = {
    pvar_dset_devxSoft, pvar_dset_devxScanIO,
    pvar_dset_devxLTestJSON_LINK, pvar_dset_devxLTestVME_IO,
    pvar_dset_devxLTestCAMAC_IO, pvar_dset_devxLTestAB_IO,
    pvar_dset_devxLTestGPIB_IO, pvar_dset_devxLTestBITBUS_IO,
    pvar_dset_devxLTestINST_IO, pvar_dset_devxLTestBBGPIB_IO,
    pvar_dset_devxLTestRF_IO, pvar_dset_devxLTestVXI_IO
};

epicsShareExtern jlif *pvar_jlif_jlifZ, *pvar_jlif_xlinkIf;

static struct jlif *jlifsl[] = {
    pvar_jlif_jlifZ,
    pvar_jlif_xlinkIf};

int dbTestIoc_registerRecordDeviceDriver(DBBASE *pbase)
{
    static int executed = 0;
    const char *bldTop = "/home/oem/epics/base-7.0.2-rc1";
    const char *envTop = getenv("TOP");

    if (envTop && strcmp(envTop, bldTop)) {
        printf("Warning: IOC is booting with TOP = \"%s\"\n"
               "          but was built with TOP = \"%s\"\n",
               envTop, bldTop);
    }

    if (!pbase) {
        printf("pdbbase is NULL; you must load a DBD file first.\n");
        return -1;
    }

    if (executed) {
        printf("Warning: Registration already done.\n");
    }
    executed = 1;

    registerRecordTypes(pbase, NELEMENTS(rtl), recordTypeNames, rtl);
    registerDevices(pbase, NELEMENTS(devsl), deviceSupportNames, devsl);
    registerJLinks(pbase, NELEMENTS(jlifsl), jlifsl);
    return 0;
}

/* dbTestIoc_registerRecordDeviceDriver */
static const iocshArg rrddArg0 = {"pdbbase", iocshArgPdbbase};
static const iocshArg *rrddArgs[] = {&rrddArg0};
static const iocshFuncDef rrddFuncDef =
    {"dbTestIoc_registerRecordDeviceDriver", 1, rrddArgs};
static void rrddCallFunc(const iocshArgBuf *)
{
    dbTestIoc_registerRecordDeviceDriver(*iocshPpdbbase);
}

} // extern "C"

/*
 * Register commands on application startup
 */
static int Registration() {
    iocshRegisterCommon();
    iocshRegister(&rrddFuncDef, rrddCallFunc);
    return 0;
}

static int done EPICS_UNUSED = Registration();
