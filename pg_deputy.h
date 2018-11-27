#ifndef PG_DEPUTY_H
#define PG_DEPUTY_H

#include "catalog/genbki.h"

#define DeputyClassId 9101

CATALOG(pg_deputy,9101)
{
  Oid deputyclassid;
  Oid sourceclassid;
  int32 deputyseqno;
} FormData_pg_deputy;

typedef FormData_pg_deputy *Form_pg_deputy;

#define Natts_pg_deputy 3
#define Anum_pg_deputy_deputyclassid 1
#define Anum_pg_deputy_sourceclassOid 2
#define Anum_pg_deputy_deputyseqno 3


#endif
