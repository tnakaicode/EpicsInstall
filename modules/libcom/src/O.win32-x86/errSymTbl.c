/* Generated file errSymTbl.c */

#include "errMdef.h"
#include "errSymTbl.h"
#include "dbDefs.h"

#ifndef M_asLib
#define M_asLib (501 << 16) /* Access Security */
#endif
#ifndef M_bucket
#define M_bucket (502 << 16) /* Bucket Hash */
#endif
#ifndef M_devLib
#define M_devLib (503 << 16) /* Hardware RegisterAccess */
#endif
#ifndef M_stdlib
#define M_stdlib (504 << 16) /* EPICS Standard library */
#endif
#ifndef M_pool
#define M_pool (505 << 16) /* Thread pool */
#endif
#ifndef M_time
#define M_time (506 << 16) /* epicsTime */
#endif
#ifndef M_dbAccess
#define M_dbAccess (511 << 16) /* Database Access Routines */
#endif
#ifndef M_dbLib
#define M_dbLib (512 << 16) /* Static Database Access */
#endif
#ifndef M_drvSup
#define M_drvSup (513 << 16) /* Driver Support */
#endif
#ifndef M_devSup
#define M_devSup (514 << 16) /* Device Support */
#endif
#ifndef M_recSup
#define M_recSup (515 << 16) /* Record Support */
#endif
#ifndef M_cas
#define M_cas (521 << 16) /* CA server */
#endif
#ifndef M_gddFuncTbl
#define M_gddFuncTbl (522 << 16) /* gdd jump table */
#endif
#ifndef M_casApp
#define M_casApp (523 << 16) /* CA server application */
#endif

static ERRSYMBOL symbols[] = {
    { (M_devLib| 1), "interrupt vector in use"},
    { (M_devLib| 2), "interrupt vector install failed"},
    { (M_devLib| 3), "Unrecognized interrupt type"},
    { (M_devLib| 4), "Interrupt vector not in use by caller"},
    { (M_devLib| 5), "Invalid VME A16 address"},
    { (M_devLib| 6), "Invalid VME A24 address"},
    { (M_devLib| 7), "Invalid VME A32 address"},
    { (M_devLib| 8), "Unrecognized address space type"},
    { (M_devLib| 9), "Specified device address overlaps another device"},
    { (M_devLib| 10), "This device already owns the address range"},
    { (M_devLib| 11), "unable to map address"},
    { (M_devLib| 12), "Interrupt at vector disconnected from an EPICS device"},
    { (M_devLib| 13), "Internal failure"},
    { (M_devLib| 14), "unable to enable interrupt level"},
    { (M_devLib| 15), "unable to disable interrupt level"},
    { (M_devLib| 16), "Memory allocation failed"},
    { (M_devLib| 17), "Specified device address unregistered"},
    { (M_devLib| 18), "No device at specified address"},
    { (M_devLib| 19), "Wrong device type found at specified address"},
    { (M_devLib| 20), "Signal number (offset) to large"},
    { (M_devLib| 21), "Signal count to large"},
    { (M_devLib| 22), "Device does not support requested operation"},
    { (M_devLib| 23), "Parameter to high"},
    { (M_devLib| 24), "Parameter to low"},
    { (M_devLib| 25), "Specified address is ambiguous (more than one device responds)"},
    { (M_devLib| 26), "Device self test failed"},
    { (M_devLib| 27), "Device failed during initialization"},
    { (M_devLib| 28), "Input exceeds Hardware Limit"},
    { (M_devLib| 29), "Unable to locate address space for device"},
    { (M_devLib| 30), "device timed out"},
    { (M_devLib| 31), "bad function pointer"},
    { (M_devLib| 32), "bad interrupt vector"},
    { (M_devLib| 33), "bad function argument"},
    { (M_devLib| 34), "Invalid ISA address"},
    { (M_devLib| 35), "Invalid VME CR/CSR address"},
    { (M_time| 1), "No time provider"},
    { (M_time| 2), "Bad event number"},
    { (M_time| 3), "Invalid arguments"},
    { (M_time| 4), "Out of memory"},
    { (M_time| 5), "Provider not synchronized"},
    { (M_time| 6), "Invalid timeone"},
    { (M_time| 7), "Time conversion error"},
    { (M_asLib| 1), "Client Exists"},
    { (M_asLib| 2), "User Access Group does not exist"},
    { (M_asLib| 3), "Host Access Group does not exist"},
    { (M_asLib| 4), "access security: no access allowed"},
    { (M_asLib| 5), "access security: no modification allowed"},
    { (M_asLib| 6), "access security: bad configuration file"},
    { (M_asLib| 7), "access security: bad calculation espression"},
    { (M_asLib| 8), "Duplicate Access Security Group"},
    { (M_asLib| 9), "access security: Init failed"},
    { (M_asLib|10), "access security is not active"},
    { (M_asLib|11), "access security: bad ASMEMBERPVT"},
    { (M_asLib|12), "access security: bad ASCLIENTPVT"},
    { (M_asLib|13), "access security: bad ASG"},
    { (M_asLib|14), "access security: no Memory"},
    { (M_stdlib | 1), "No digits to convert"},
    { (M_stdlib | 2), "Extraneous characters"},
    { (M_stdlib | 3), "Too small to represent"},
    { (M_stdlib | 4), "Too large to represent"},
    { (M_stdlib | 5), "Number base not supported"},
    { (M_pool| 1), "Job already queued or running"},
    { (M_pool| 2), "Job was not queued or running"},
    { (M_pool| 3), "Job not associated with a pool"},
    { (M_pool| 4), "Pool not currently accepting jobs"},
    { (M_pool| 5), "Can't create worker thread"},
    { (M_pool| 6), "Pool still busy after timeout"},
};

static ERRSYMTAB symTbl = {
    NELEMENTS(symbols), symbols
};

ERRSYMTAB_ID errSymTbl = &symTbl;

