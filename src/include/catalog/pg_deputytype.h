#ifndef PG_DEPUTYTYPE_H
#define PG_DEPUTYTYPE_H

#include "catalog/genbki.h"

#define DeputyTypeRelationId 9002

CATALOG(pg_deputytype,9002)
{
NameData	deputyclassname;	/*name of the deputy class.*/
Oid	deputyclassoid;		/*id of a deputy class */
char	deputytyp;	/*deputytype when we create a deputy class.*/
int2	deputy_level;
text	deputy_query;	/*the query of selectstmt when we create a deputy class*/
text	deputy_desc;
	
} FormData_pg_deputytype;

typedef FormData_pg_deputytype *Form_pg_deputytype;

#define Natts_pg_deputytype						6
#define Anum_pg_deputytype_deputyclassname	1
#define Anum_pg_deputytype_deputyclassid		2
#define Anum_pg_deputytype_deputytype			3
#define Anum_pg_deputytype_deputy_level		4
#define Anum_pg_deputytype_deputy_query		5
#define Anum_pg_deputytype_deputy_desc		6



#define deputytype_select   's'
#endif   /* PG_DEPUTYTYPE_H */
