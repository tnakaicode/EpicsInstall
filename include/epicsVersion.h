/* Generated file epicsVersion.h */

#ifndef INC_epicsVersion_H
#define INC_epicsVersion_H

#define EPICS_VERSION        7
#define EPICS_REVISION       0
#define EPICS_MODIFICATION   2
#define EPICS_PATCH_LEVEL    0
#define EPICS_DEV_SNAPSHOT   "-rc1"
#define EPICS_SITE_VERSION   ""

#define EPICS_VERSION_SHORT  "7.0.2"
#define EPICS_VERSION_FULL   "7.0.2-rc1"
#define EPICS_VERSION_STRING "EPICS 7.0.2-rc1"
#define epicsReleaseVersion  "EPICS R7.0.2-rc1"

#ifndef VERSION_INT
#  define VERSION_INT(V,R,M,P) ( ((V)<<24) | ((R)<<16) | ((M)<<8) | (P))
#endif
#define EPICS_VERSION_INT VERSION_INT(7, 0, 2, 0)

#endif /* INC_epicsVersion_H */
