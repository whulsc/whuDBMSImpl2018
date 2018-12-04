#ifndef PG_SWITCHING_H	
#define PG_SWITCHING_H

#include "catalog/genbki.h"

#define SwitchingRelationId 9004 
 
CATALOG(pg_switching,9004)
{
Oid	classoid;	/*oid of the table that the switching expr belongs to */
int2	attrnum;	/*num of the attribute on which set this switching expr*/
int2	exprnum;	/* num of  this expr */
text	switching;	/*the nodeToString expr of switching*/
} FormData_pg_switching;

typedef FormData_pg_switching  *Form_pg_switching;

#define Natts_pg_switching				4
#define Anum_pg_switching_classoid		1
#define Anum_pg_switching_attrnum		2
#define Anum_pg_switching_exprnum		3
#define Anum_pg_switching_switching		4	

#endif	/* PG_SWITCHING_H */
