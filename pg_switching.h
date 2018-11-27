#ifndef PG_SWITCHING_H
#define PG_SWITCHING_H

#include "catalog/genbki.h"

#define SwitchingRelationId 9103

CATALOG(pg_switching,9103)
{
  Oid  classoid; 
  int32 attrnum;
  int32 exprnum;
  text switching;
} FormData_pg_switching;

typedef FormData_pg_switching *Form_pg_switching;

#define Natts_pg_switching 4
#define Anum_pg_switching_classoid 1
#define Anum_pg_switching_attrnum 2
#define Anum_pg_switching_exprnum 3
#define Anum_pg_switching_switching 4

#endif
