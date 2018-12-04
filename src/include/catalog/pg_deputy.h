#ifndef PG_DEPUTY_H
#define PG_DEPUTY_H

#include "catalog/genbki.h"

#define DeputyClassId 9001 

CATALOG(pg_deputy,9001) 
{
	Oid sourceclassid;
	Oid deputyclassid;
	int4 deputyseqno;
} FormData_pg_deputy;

typedef FormData_pg_deputy  *Form_pg_deputy;

#define Natts_pg_deputy 3
#define Anum_pg_deputy_sourceclassid		1
#define Anum_pg_deputy_deputyclassid		2
#define Anum_pg_deputy_deputyseqno		    3

#endif   /* PG_DEPUTY_H */
