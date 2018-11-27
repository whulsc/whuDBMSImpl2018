#ifndef PG_DEPUTYTYPE_H
#define PG_DEPUTYTYPE_H

#include "catalog/genbki.h"

#define DeputytypeRelationId 9102

CATALOG(pg_deputytype,9102)
{
  NameData deputyclassname;
  Oid   deputyclassid;
  char deputytyp;
  int32 deputy_level;
  text  deputyquery;
  text deputydesc;
} FormData_pg_deputytype;

typedef FormData_pg_deputytype *Form_pg_deputytype;

#define Natts_pg_deputytype 6
#define Anum_pg_deputytype_deputyclassname 1
#define Anum_pg_deputytype_deputyclassid 2
#define Anum_pg_deputytype_deputytyp 3
#define Anum_pg_deputytype_deputy_level 4
#define Anum_pg_deputytype_deputyquery 5
#define Anum_pg_deputytype_deputydesc 6

#endif
