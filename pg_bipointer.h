#ifndef PG_BIPOINTER_H
#define PG_BIPOINTER_H

#include "catalog/genbki.h"

#define BipointerRelationId 9100

CATALOG(pg_bipointer,9100)
{ Oid sourceclassid;
  Oid sourceobjectid;
  Oid deputyclassid;
  Oid deputyobjectid;
} FormData_pg_bipointer;

typedef FormData_pg_bipointer *Form_pg_bipointer;


#define Natt_pg_bipointer 4
#define Anum_pg_bipointer_sourceclassid 1
#define Anum_pg_bipointer_sourceobjectid 2
#define Anum_pg_bipointer_deputyclassid 3
#define Anum_pg_bipointer_deputyobjectid 4

#endif
