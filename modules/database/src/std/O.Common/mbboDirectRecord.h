/* mbboDirectRecord.h generated from mbboDirectRecord.dbd */

#ifndef INC_mbboDirectRecord_H
#define INC_mbboDirectRecord_H

#include "epicsTypes.h"
#include "link.h"
#include "epicsMutex.h"
#include "ellLib.h"
#include "epicsTime.h"
#include "callback.h"

typedef struct mbboDirectRecord {
    char                name[61];   /* Record Name */
    char                desc[41];   /* Descriptor */
    char                asg[29];    /* Access Security Group */
    epicsEnum16         scan;       /* Scan Mechanism */
    epicsEnum16         pini;       /* Process at iocInit */
    epicsInt16          phas;       /* Scan Phase */
    char                evnt[40];   /* Event Name */
    epicsInt16          tse;        /* Time Stamp Event */
    DBLINK              tsel;       /* Time Stamp Link */
    epicsEnum16         dtyp;       /* Device Type */
    epicsInt16          disv;       /* Disable Value */
    epicsInt16          disa;       /* Disable */
    DBLINK              sdis;       /* Scanning Disable */
    epicsMutexId        mlok;       /* Monitor lock */
    ELLLIST             mlis;       /* Monitor List */
    ELLLIST             bklnk;      /* Backwards link tracking */
    epicsUInt8          disp;       /* Disable putField */
    epicsUInt8          proc;       /* Force Processing */
    epicsEnum16         stat;       /* Alarm Status */
    epicsEnum16         sevr;       /* Alarm Severity */
    epicsEnum16         nsta;       /* New Alarm Status */
    epicsEnum16         nsev;       /* New Alarm Severity */
    epicsEnum16         acks;       /* Alarm Ack Severity */
    epicsEnum16         ackt;       /* Alarm Ack Transient */
    epicsEnum16         diss;       /* Disable Alarm Sevrty */
    epicsUInt8          lcnt;       /* Lock Count */
    epicsUInt8          pact;       /* Record active */
    epicsUInt8          putf;       /* dbPutField process */
    epicsUInt8          rpro;       /* Reprocess  */
    struct asgMember    *asp;       /* Access Security Pvt */
    struct processNotify *ppn;      /* pprocessNotify */
    struct processNotifyRecord *ppnr; /* pprocessNotifyRecord */
    struct scan_element *spvt;      /* Scan Private */
    struct typed_rset   *rset;      /* Address of RSET */
    struct dset         *dset;      /* DSET address */
    void                *dpvt;      /* Device Private */
    struct dbRecordType *rdes;      /* Address of dbRecordType */
    struct lockRecord   *lset;      /* Lock Set */
    epicsEnum16         prio;       /* Scheduling Priority */
    epicsUInt8          tpro;       /* Trace Processing */
    char                bkpt;       /* Break Point */
    epicsUInt8          udf;        /* Undefined */
    epicsEnum16         udfs;       /* Undefined Alarm Sevrty */
    epicsTimeStamp      time;       /* Time */
    DBLINK              flnk;       /* Forward Process Link */
    epicsInt32          val;        /* Word */
    epicsEnum16         omsl;       /* Output Mode Select */
    epicsInt16          nobt;       /* Number of Bits */
    DBLINK              dol;        /* Desired Output Loc */
    DBLINK              out;        /* Output Specification */
    epicsUInt32         rval;       /* Raw Value */
    epicsUInt32         oraw;       /* Prev Raw Value */
    epicsUInt32         rbv;        /* Readback Value */
    epicsUInt32         orbv;       /* Prev Readback Value */
    epicsUInt32         mask;       /* Hardware Mask */
    epicsInt32          mlst;       /* Last Value Monitored */
    epicsUInt16         shft;       /* Shift */
    DBLINK              siol;       /* Simulation Output Link */
    DBLINK              siml;       /* Simulation Mode Link */
    epicsEnum16         simm;       /* Simulation Mode */
    epicsEnum16         sims;       /* Simulation Mode Severity */
    epicsEnum16         oldsimm;    /* Prev. Simulation Mode */
    epicsEnum16         sscn;       /* Sim. Mode Scan */
    epicsFloat64        sdly;       /* Sim. Mode Async Delay */
    CALLBACK            *simpvt;    /* Sim. Mode Private */
    epicsEnum16         ivoa;       /* INVALID outpt action */
    epicsInt32          ivov;       /* INVALID output value */
    epicsUInt8          b0;         /* Bit 0 */
    epicsUInt8          b1;         /* Bit 1 */
    epicsUInt8          b2;         /* Bit 2 */
    epicsUInt8          b3;         /* Bit 3 */
    epicsUInt8          b4;         /* Bit 4 */
    epicsUInt8          b5;         /* Bit 5 */
    epicsUInt8          b6;         /* Bit 6 */
    epicsUInt8          b7;         /* Bit 7 */
    epicsUInt8          b8;         /* Bit 8 */
    epicsUInt8          b9;         /* Bit 9 */
    epicsUInt8          ba;         /* Bit 10 */
    epicsUInt8          bb;         /* Bit 11 */
    epicsUInt8          bc;         /* Bit 12 */
    epicsUInt8          bd;         /* Bit 13 */
    epicsUInt8          be;         /* Bit 14 */
    epicsUInt8          bf;         /* Bit 15 */
    epicsUInt8          b10;        /* Bit 16 */
    epicsUInt8          b11;        /* Bit 17 */
    epicsUInt8          b12;        /* Bit 18 */
    epicsUInt8          b13;        /* Bit 19 */
    epicsUInt8          b14;        /* Bit 20 */
    epicsUInt8          b15;        /* Bit 21 */
    epicsUInt8          b16;        /* Bit 22 */
    epicsUInt8          b17;        /* Bit 23 */
    epicsUInt8          b18;        /* Bit 24 */
    epicsUInt8          b19;        /* Bit 25 */
    epicsUInt8          b1a;        /* Bit 26 */
    epicsUInt8          b1b;        /* Bit 27 */
    epicsUInt8          b1c;        /* Bit 28 */
    epicsUInt8          b1d;        /* Bit 29 */
    epicsUInt8          b1e;        /* Bit 30 */
    epicsUInt8          b1f;        /* Bit 31 */
} mbboDirectRecord;

typedef enum {
	mbboDirectRecordNAME = 0,
	mbboDirectRecordDESC = 1,
	mbboDirectRecordASG = 2,
	mbboDirectRecordSCAN = 3,
	mbboDirectRecordPINI = 4,
	mbboDirectRecordPHAS = 5,
	mbboDirectRecordEVNT = 6,
	mbboDirectRecordTSE = 7,
	mbboDirectRecordTSEL = 8,
	mbboDirectRecordDTYP = 9,
	mbboDirectRecordDISV = 10,
	mbboDirectRecordDISA = 11,
	mbboDirectRecordSDIS = 12,
	mbboDirectRecordMLOK = 13,
	mbboDirectRecordMLIS = 14,
	mbboDirectRecordBKLNK = 15,
	mbboDirectRecordDISP = 16,
	mbboDirectRecordPROC = 17,
	mbboDirectRecordSTAT = 18,
	mbboDirectRecordSEVR = 19,
	mbboDirectRecordNSTA = 20,
	mbboDirectRecordNSEV = 21,
	mbboDirectRecordACKS = 22,
	mbboDirectRecordACKT = 23,
	mbboDirectRecordDISS = 24,
	mbboDirectRecordLCNT = 25,
	mbboDirectRecordPACT = 26,
	mbboDirectRecordPUTF = 27,
	mbboDirectRecordRPRO = 28,
	mbboDirectRecordASP = 29,
	mbboDirectRecordPPN = 30,
	mbboDirectRecordPPNR = 31,
	mbboDirectRecordSPVT = 32,
	mbboDirectRecordRSET = 33,
	mbboDirectRecordDSET = 34,
	mbboDirectRecordDPVT = 35,
	mbboDirectRecordRDES = 36,
	mbboDirectRecordLSET = 37,
	mbboDirectRecordPRIO = 38,
	mbboDirectRecordTPRO = 39,
	mbboDirectRecordBKPT = 40,
	mbboDirectRecordUDF = 41,
	mbboDirectRecordUDFS = 42,
	mbboDirectRecordTIME = 43,
	mbboDirectRecordFLNK = 44,
	mbboDirectRecordVAL = 45,
	mbboDirectRecordOMSL = 46,
	mbboDirectRecordNOBT = 47,
	mbboDirectRecordDOL = 48,
	mbboDirectRecordOUT = 49,
	mbboDirectRecordRVAL = 50,
	mbboDirectRecordORAW = 51,
	mbboDirectRecordRBV = 52,
	mbboDirectRecordORBV = 53,
	mbboDirectRecordMASK = 54,
	mbboDirectRecordMLST = 55,
	mbboDirectRecordSHFT = 56,
	mbboDirectRecordSIOL = 57,
	mbboDirectRecordSIML = 58,
	mbboDirectRecordSIMM = 59,
	mbboDirectRecordSIMS = 60,
	mbboDirectRecordOLDSIMM = 61,
	mbboDirectRecordSSCN = 62,
	mbboDirectRecordSDLY = 63,
	mbboDirectRecordSIMPVT = 64,
	mbboDirectRecordIVOA = 65,
	mbboDirectRecordIVOV = 66,
	mbboDirectRecordB0 = 67,
	mbboDirectRecordB1 = 68,
	mbboDirectRecordB2 = 69,
	mbboDirectRecordB3 = 70,
	mbboDirectRecordB4 = 71,
	mbboDirectRecordB5 = 72,
	mbboDirectRecordB6 = 73,
	mbboDirectRecordB7 = 74,
	mbboDirectRecordB8 = 75,
	mbboDirectRecordB9 = 76,
	mbboDirectRecordBA = 77,
	mbboDirectRecordBB = 78,
	mbboDirectRecordBC = 79,
	mbboDirectRecordBD = 80,
	mbboDirectRecordBE = 81,
	mbboDirectRecordBF = 82,
	mbboDirectRecordB10 = 83,
	mbboDirectRecordB11 = 84,
	mbboDirectRecordB12 = 85,
	mbboDirectRecordB13 = 86,
	mbboDirectRecordB14 = 87,
	mbboDirectRecordB15 = 88,
	mbboDirectRecordB16 = 89,
	mbboDirectRecordB17 = 90,
	mbboDirectRecordB18 = 91,
	mbboDirectRecordB19 = 92,
	mbboDirectRecordB1A = 93,
	mbboDirectRecordB1B = 94,
	mbboDirectRecordB1C = 95,
	mbboDirectRecordB1D = 96,
	mbboDirectRecordB1E = 97,
	mbboDirectRecordB1F = 98
} mbboDirectFieldIndex;

#ifdef GEN_SIZE_OFFSET

#include <epicsAssert.h>
#include <epicsExport.h>
#ifdef __cplusplus
extern "C" {
#endif
static int mbboDirectRecordSizeOffset(dbRecordType *prt)
{
    mbboDirectRecord *prec = 0;

    assert(prt->no_fields == 99);
    prt->papFldDes[mbboDirectRecordNAME]->size = sizeof(prec->name);
    prt->papFldDes[mbboDirectRecordDESC]->size = sizeof(prec->desc);
    prt->papFldDes[mbboDirectRecordASG]->size = sizeof(prec->asg);
    prt->papFldDes[mbboDirectRecordSCAN]->size = sizeof(prec->scan);
    prt->papFldDes[mbboDirectRecordPINI]->size = sizeof(prec->pini);
    prt->papFldDes[mbboDirectRecordPHAS]->size = sizeof(prec->phas);
    prt->papFldDes[mbboDirectRecordEVNT]->size = sizeof(prec->evnt);
    prt->papFldDes[mbboDirectRecordTSE]->size = sizeof(prec->tse);
    prt->papFldDes[mbboDirectRecordTSEL]->size = sizeof(prec->tsel);
    prt->papFldDes[mbboDirectRecordDTYP]->size = sizeof(prec->dtyp);
    prt->papFldDes[mbboDirectRecordDISV]->size = sizeof(prec->disv);
    prt->papFldDes[mbboDirectRecordDISA]->size = sizeof(prec->disa);
    prt->papFldDes[mbboDirectRecordSDIS]->size = sizeof(prec->sdis);
    prt->papFldDes[mbboDirectRecordMLOK]->size = sizeof(prec->mlok);
    prt->papFldDes[mbboDirectRecordMLIS]->size = sizeof(prec->mlis);
    prt->papFldDes[mbboDirectRecordBKLNK]->size = sizeof(prec->bklnk);
    prt->papFldDes[mbboDirectRecordDISP]->size = sizeof(prec->disp);
    prt->papFldDes[mbboDirectRecordPROC]->size = sizeof(prec->proc);
    prt->papFldDes[mbboDirectRecordSTAT]->size = sizeof(prec->stat);
    prt->papFldDes[mbboDirectRecordSEVR]->size = sizeof(prec->sevr);
    prt->papFldDes[mbboDirectRecordNSTA]->size = sizeof(prec->nsta);
    prt->papFldDes[mbboDirectRecordNSEV]->size = sizeof(prec->nsev);
    prt->papFldDes[mbboDirectRecordACKS]->size = sizeof(prec->acks);
    prt->papFldDes[mbboDirectRecordACKT]->size = sizeof(prec->ackt);
    prt->papFldDes[mbboDirectRecordDISS]->size = sizeof(prec->diss);
    prt->papFldDes[mbboDirectRecordLCNT]->size = sizeof(prec->lcnt);
    prt->papFldDes[mbboDirectRecordPACT]->size = sizeof(prec->pact);
    prt->papFldDes[mbboDirectRecordPUTF]->size = sizeof(prec->putf);
    prt->papFldDes[mbboDirectRecordRPRO]->size = sizeof(prec->rpro);
    prt->papFldDes[mbboDirectRecordASP]->size = sizeof(prec->asp);
    prt->papFldDes[mbboDirectRecordPPN]->size = sizeof(prec->ppn);
    prt->papFldDes[mbboDirectRecordPPNR]->size = sizeof(prec->ppnr);
    prt->papFldDes[mbboDirectRecordSPVT]->size = sizeof(prec->spvt);
    prt->papFldDes[mbboDirectRecordRSET]->size = sizeof(prec->rset);
    prt->papFldDes[mbboDirectRecordDSET]->size = sizeof(prec->dset);
    prt->papFldDes[mbboDirectRecordDPVT]->size = sizeof(prec->dpvt);
    prt->papFldDes[mbboDirectRecordRDES]->size = sizeof(prec->rdes);
    prt->papFldDes[mbboDirectRecordLSET]->size = sizeof(prec->lset);
    prt->papFldDes[mbboDirectRecordPRIO]->size = sizeof(prec->prio);
    prt->papFldDes[mbboDirectRecordTPRO]->size = sizeof(prec->tpro);
    prt->papFldDes[mbboDirectRecordBKPT]->size = sizeof(prec->bkpt);
    prt->papFldDes[mbboDirectRecordUDF]->size = sizeof(prec->udf);
    prt->papFldDes[mbboDirectRecordUDFS]->size = sizeof(prec->udfs);
    prt->papFldDes[mbboDirectRecordTIME]->size = sizeof(prec->time);
    prt->papFldDes[mbboDirectRecordFLNK]->size = sizeof(prec->flnk);
    prt->papFldDes[mbboDirectRecordVAL]->size = sizeof(prec->val);
    prt->papFldDes[mbboDirectRecordOMSL]->size = sizeof(prec->omsl);
    prt->papFldDes[mbboDirectRecordNOBT]->size = sizeof(prec->nobt);
    prt->papFldDes[mbboDirectRecordDOL]->size = sizeof(prec->dol);
    prt->papFldDes[mbboDirectRecordOUT]->size = sizeof(prec->out);
    prt->papFldDes[mbboDirectRecordRVAL]->size = sizeof(prec->rval);
    prt->papFldDes[mbboDirectRecordORAW]->size = sizeof(prec->oraw);
    prt->papFldDes[mbboDirectRecordRBV]->size = sizeof(prec->rbv);
    prt->papFldDes[mbboDirectRecordORBV]->size = sizeof(prec->orbv);
    prt->papFldDes[mbboDirectRecordMASK]->size = sizeof(prec->mask);
    prt->papFldDes[mbboDirectRecordMLST]->size = sizeof(prec->mlst);
    prt->papFldDes[mbboDirectRecordSHFT]->size = sizeof(prec->shft);
    prt->papFldDes[mbboDirectRecordSIOL]->size = sizeof(prec->siol);
    prt->papFldDes[mbboDirectRecordSIML]->size = sizeof(prec->siml);
    prt->papFldDes[mbboDirectRecordSIMM]->size = sizeof(prec->simm);
    prt->papFldDes[mbboDirectRecordSIMS]->size = sizeof(prec->sims);
    prt->papFldDes[mbboDirectRecordOLDSIMM]->size = sizeof(prec->oldsimm);
    prt->papFldDes[mbboDirectRecordSSCN]->size = sizeof(prec->sscn);
    prt->papFldDes[mbboDirectRecordSDLY]->size = sizeof(prec->sdly);
    prt->papFldDes[mbboDirectRecordSIMPVT]->size = sizeof(prec->simpvt);
    prt->papFldDes[mbboDirectRecordIVOA]->size = sizeof(prec->ivoa);
    prt->papFldDes[mbboDirectRecordIVOV]->size = sizeof(prec->ivov);
    prt->papFldDes[mbboDirectRecordB0]->size = sizeof(prec->b0);
    prt->papFldDes[mbboDirectRecordB1]->size = sizeof(prec->b1);
    prt->papFldDes[mbboDirectRecordB2]->size = sizeof(prec->b2);
    prt->papFldDes[mbboDirectRecordB3]->size = sizeof(prec->b3);
    prt->papFldDes[mbboDirectRecordB4]->size = sizeof(prec->b4);
    prt->papFldDes[mbboDirectRecordB5]->size = sizeof(prec->b5);
    prt->papFldDes[mbboDirectRecordB6]->size = sizeof(prec->b6);
    prt->papFldDes[mbboDirectRecordB7]->size = sizeof(prec->b7);
    prt->papFldDes[mbboDirectRecordB8]->size = sizeof(prec->b8);
    prt->papFldDes[mbboDirectRecordB9]->size = sizeof(prec->b9);
    prt->papFldDes[mbboDirectRecordBA]->size = sizeof(prec->ba);
    prt->papFldDes[mbboDirectRecordBB]->size = sizeof(prec->bb);
    prt->papFldDes[mbboDirectRecordBC]->size = sizeof(prec->bc);
    prt->papFldDes[mbboDirectRecordBD]->size = sizeof(prec->bd);
    prt->papFldDes[mbboDirectRecordBE]->size = sizeof(prec->be);
    prt->papFldDes[mbboDirectRecordBF]->size = sizeof(prec->bf);
    prt->papFldDes[mbboDirectRecordB10]->size = sizeof(prec->b10);
    prt->papFldDes[mbboDirectRecordB11]->size = sizeof(prec->b11);
    prt->papFldDes[mbboDirectRecordB12]->size = sizeof(prec->b12);
    prt->papFldDes[mbboDirectRecordB13]->size = sizeof(prec->b13);
    prt->papFldDes[mbboDirectRecordB14]->size = sizeof(prec->b14);
    prt->papFldDes[mbboDirectRecordB15]->size = sizeof(prec->b15);
    prt->papFldDes[mbboDirectRecordB16]->size = sizeof(prec->b16);
    prt->papFldDes[mbboDirectRecordB17]->size = sizeof(prec->b17);
    prt->papFldDes[mbboDirectRecordB18]->size = sizeof(prec->b18);
    prt->papFldDes[mbboDirectRecordB19]->size = sizeof(prec->b19);
    prt->papFldDes[mbboDirectRecordB1A]->size = sizeof(prec->b1a);
    prt->papFldDes[mbboDirectRecordB1B]->size = sizeof(prec->b1b);
    prt->papFldDes[mbboDirectRecordB1C]->size = sizeof(prec->b1c);
    prt->papFldDes[mbboDirectRecordB1D]->size = sizeof(prec->b1d);
    prt->papFldDes[mbboDirectRecordB1E]->size = sizeof(prec->b1e);
    prt->papFldDes[mbboDirectRecordB1F]->size = sizeof(prec->b1f);
    prt->papFldDes[mbboDirectRecordNAME]->offset = (unsigned short)((char *)&prec->name - (char *)prec);
    prt->papFldDes[mbboDirectRecordDESC]->offset = (unsigned short)((char *)&prec->desc - (char *)prec);
    prt->papFldDes[mbboDirectRecordASG]->offset = (unsigned short)((char *)&prec->asg - (char *)prec);
    prt->papFldDes[mbboDirectRecordSCAN]->offset = (unsigned short)((char *)&prec->scan - (char *)prec);
    prt->papFldDes[mbboDirectRecordPINI]->offset = (unsigned short)((char *)&prec->pini - (char *)prec);
    prt->papFldDes[mbboDirectRecordPHAS]->offset = (unsigned short)((char *)&prec->phas - (char *)prec);
    prt->papFldDes[mbboDirectRecordEVNT]->offset = (unsigned short)((char *)&prec->evnt - (char *)prec);
    prt->papFldDes[mbboDirectRecordTSE]->offset = (unsigned short)((char *)&prec->tse - (char *)prec);
    prt->papFldDes[mbboDirectRecordTSEL]->offset = (unsigned short)((char *)&prec->tsel - (char *)prec);
    prt->papFldDes[mbboDirectRecordDTYP]->offset = (unsigned short)((char *)&prec->dtyp - (char *)prec);
    prt->papFldDes[mbboDirectRecordDISV]->offset = (unsigned short)((char *)&prec->disv - (char *)prec);
    prt->papFldDes[mbboDirectRecordDISA]->offset = (unsigned short)((char *)&prec->disa - (char *)prec);
    prt->papFldDes[mbboDirectRecordSDIS]->offset = (unsigned short)((char *)&prec->sdis - (char *)prec);
    prt->papFldDes[mbboDirectRecordMLOK]->offset = (unsigned short)((char *)&prec->mlok - (char *)prec);
    prt->papFldDes[mbboDirectRecordMLIS]->offset = (unsigned short)((char *)&prec->mlis - (char *)prec);
    prt->papFldDes[mbboDirectRecordBKLNK]->offset = (unsigned short)((char *)&prec->bklnk - (char *)prec);
    prt->papFldDes[mbboDirectRecordDISP]->offset = (unsigned short)((char *)&prec->disp - (char *)prec);
    prt->papFldDes[mbboDirectRecordPROC]->offset = (unsigned short)((char *)&prec->proc - (char *)prec);
    prt->papFldDes[mbboDirectRecordSTAT]->offset = (unsigned short)((char *)&prec->stat - (char *)prec);
    prt->papFldDes[mbboDirectRecordSEVR]->offset = (unsigned short)((char *)&prec->sevr - (char *)prec);
    prt->papFldDes[mbboDirectRecordNSTA]->offset = (unsigned short)((char *)&prec->nsta - (char *)prec);
    prt->papFldDes[mbboDirectRecordNSEV]->offset = (unsigned short)((char *)&prec->nsev - (char *)prec);
    prt->papFldDes[mbboDirectRecordACKS]->offset = (unsigned short)((char *)&prec->acks - (char *)prec);
    prt->papFldDes[mbboDirectRecordACKT]->offset = (unsigned short)((char *)&prec->ackt - (char *)prec);
    prt->papFldDes[mbboDirectRecordDISS]->offset = (unsigned short)((char *)&prec->diss - (char *)prec);
    prt->papFldDes[mbboDirectRecordLCNT]->offset = (unsigned short)((char *)&prec->lcnt - (char *)prec);
    prt->papFldDes[mbboDirectRecordPACT]->offset = (unsigned short)((char *)&prec->pact - (char *)prec);
    prt->papFldDes[mbboDirectRecordPUTF]->offset = (unsigned short)((char *)&prec->putf - (char *)prec);
    prt->papFldDes[mbboDirectRecordRPRO]->offset = (unsigned short)((char *)&prec->rpro - (char *)prec);
    prt->papFldDes[mbboDirectRecordASP]->offset = (unsigned short)((char *)&prec->asp - (char *)prec);
    prt->papFldDes[mbboDirectRecordPPN]->offset = (unsigned short)((char *)&prec->ppn - (char *)prec);
    prt->papFldDes[mbboDirectRecordPPNR]->offset = (unsigned short)((char *)&prec->ppnr - (char *)prec);
    prt->papFldDes[mbboDirectRecordSPVT]->offset = (unsigned short)((char *)&prec->spvt - (char *)prec);
    prt->papFldDes[mbboDirectRecordRSET]->offset = (unsigned short)((char *)&prec->rset - (char *)prec);
    prt->papFldDes[mbboDirectRecordDSET]->offset = (unsigned short)((char *)&prec->dset - (char *)prec);
    prt->papFldDes[mbboDirectRecordDPVT]->offset = (unsigned short)((char *)&prec->dpvt - (char *)prec);
    prt->papFldDes[mbboDirectRecordRDES]->offset = (unsigned short)((char *)&prec->rdes - (char *)prec);
    prt->papFldDes[mbboDirectRecordLSET]->offset = (unsigned short)((char *)&prec->lset - (char *)prec);
    prt->papFldDes[mbboDirectRecordPRIO]->offset = (unsigned short)((char *)&prec->prio - (char *)prec);
    prt->papFldDes[mbboDirectRecordTPRO]->offset = (unsigned short)((char *)&prec->tpro - (char *)prec);
    prt->papFldDes[mbboDirectRecordBKPT]->offset = (unsigned short)((char *)&prec->bkpt - (char *)prec);
    prt->papFldDes[mbboDirectRecordUDF]->offset = (unsigned short)((char *)&prec->udf - (char *)prec);
    prt->papFldDes[mbboDirectRecordUDFS]->offset = (unsigned short)((char *)&prec->udfs - (char *)prec);
    prt->papFldDes[mbboDirectRecordTIME]->offset = (unsigned short)((char *)&prec->time - (char *)prec);
    prt->papFldDes[mbboDirectRecordFLNK]->offset = (unsigned short)((char *)&prec->flnk - (char *)prec);
    prt->papFldDes[mbboDirectRecordVAL]->offset = (unsigned short)((char *)&prec->val - (char *)prec);
    prt->papFldDes[mbboDirectRecordOMSL]->offset = (unsigned short)((char *)&prec->omsl - (char *)prec);
    prt->papFldDes[mbboDirectRecordNOBT]->offset = (unsigned short)((char *)&prec->nobt - (char *)prec);
    prt->papFldDes[mbboDirectRecordDOL]->offset = (unsigned short)((char *)&prec->dol - (char *)prec);
    prt->papFldDes[mbboDirectRecordOUT]->offset = (unsigned short)((char *)&prec->out - (char *)prec);
    prt->papFldDes[mbboDirectRecordRVAL]->offset = (unsigned short)((char *)&prec->rval - (char *)prec);
    prt->papFldDes[mbboDirectRecordORAW]->offset = (unsigned short)((char *)&prec->oraw - (char *)prec);
    prt->papFldDes[mbboDirectRecordRBV]->offset = (unsigned short)((char *)&prec->rbv - (char *)prec);
    prt->papFldDes[mbboDirectRecordORBV]->offset = (unsigned short)((char *)&prec->orbv - (char *)prec);
    prt->papFldDes[mbboDirectRecordMASK]->offset = (unsigned short)((char *)&prec->mask - (char *)prec);
    prt->papFldDes[mbboDirectRecordMLST]->offset = (unsigned short)((char *)&prec->mlst - (char *)prec);
    prt->papFldDes[mbboDirectRecordSHFT]->offset = (unsigned short)((char *)&prec->shft - (char *)prec);
    prt->papFldDes[mbboDirectRecordSIOL]->offset = (unsigned short)((char *)&prec->siol - (char *)prec);
    prt->papFldDes[mbboDirectRecordSIML]->offset = (unsigned short)((char *)&prec->siml - (char *)prec);
    prt->papFldDes[mbboDirectRecordSIMM]->offset = (unsigned short)((char *)&prec->simm - (char *)prec);
    prt->papFldDes[mbboDirectRecordSIMS]->offset = (unsigned short)((char *)&prec->sims - (char *)prec);
    prt->papFldDes[mbboDirectRecordOLDSIMM]->offset = (unsigned short)((char *)&prec->oldsimm - (char *)prec);
    prt->papFldDes[mbboDirectRecordSSCN]->offset = (unsigned short)((char *)&prec->sscn - (char *)prec);
    prt->papFldDes[mbboDirectRecordSDLY]->offset = (unsigned short)((char *)&prec->sdly - (char *)prec);
    prt->papFldDes[mbboDirectRecordSIMPVT]->offset = (unsigned short)((char *)&prec->simpvt - (char *)prec);
    prt->papFldDes[mbboDirectRecordIVOA]->offset = (unsigned short)((char *)&prec->ivoa - (char *)prec);
    prt->papFldDes[mbboDirectRecordIVOV]->offset = (unsigned short)((char *)&prec->ivov - (char *)prec);
    prt->papFldDes[mbboDirectRecordB0]->offset = (unsigned short)((char *)&prec->b0 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1]->offset = (unsigned short)((char *)&prec->b1 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB2]->offset = (unsigned short)((char *)&prec->b2 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB3]->offset = (unsigned short)((char *)&prec->b3 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB4]->offset = (unsigned short)((char *)&prec->b4 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB5]->offset = (unsigned short)((char *)&prec->b5 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB6]->offset = (unsigned short)((char *)&prec->b6 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB7]->offset = (unsigned short)((char *)&prec->b7 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB8]->offset = (unsigned short)((char *)&prec->b8 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB9]->offset = (unsigned short)((char *)&prec->b9 - (char *)prec);
    prt->papFldDes[mbboDirectRecordBA]->offset = (unsigned short)((char *)&prec->ba - (char *)prec);
    prt->papFldDes[mbboDirectRecordBB]->offset = (unsigned short)((char *)&prec->bb - (char *)prec);
    prt->papFldDes[mbboDirectRecordBC]->offset = (unsigned short)((char *)&prec->bc - (char *)prec);
    prt->papFldDes[mbboDirectRecordBD]->offset = (unsigned short)((char *)&prec->bd - (char *)prec);
    prt->papFldDes[mbboDirectRecordBE]->offset = (unsigned short)((char *)&prec->be - (char *)prec);
    prt->papFldDes[mbboDirectRecordBF]->offset = (unsigned short)((char *)&prec->bf - (char *)prec);
    prt->papFldDes[mbboDirectRecordB10]->offset = (unsigned short)((char *)&prec->b10 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB11]->offset = (unsigned short)((char *)&prec->b11 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB12]->offset = (unsigned short)((char *)&prec->b12 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB13]->offset = (unsigned short)((char *)&prec->b13 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB14]->offset = (unsigned short)((char *)&prec->b14 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB15]->offset = (unsigned short)((char *)&prec->b15 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB16]->offset = (unsigned short)((char *)&prec->b16 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB17]->offset = (unsigned short)((char *)&prec->b17 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB18]->offset = (unsigned short)((char *)&prec->b18 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB19]->offset = (unsigned short)((char *)&prec->b19 - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1A]->offset = (unsigned short)((char *)&prec->b1a - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1B]->offset = (unsigned short)((char *)&prec->b1b - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1C]->offset = (unsigned short)((char *)&prec->b1c - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1D]->offset = (unsigned short)((char *)&prec->b1d - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1E]->offset = (unsigned short)((char *)&prec->b1e - (char *)prec);
    prt->papFldDes[mbboDirectRecordB1F]->offset = (unsigned short)((char *)&prec->b1f - (char *)prec);
    prt->rec_size = sizeof(*prec);
    return 0;
}
epicsExportRegistrar(mbboDirectRecordSizeOffset);

#ifdef __cplusplus
}
#endif
#endif /* GEN_SIZE_OFFSET */

#endif /* INC_mbboDirectRecord_H */
