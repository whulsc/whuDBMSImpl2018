#ifndef PG_MAPPING_H
#define PG_MAPPING_H

#include "catalog/genbki.h"

#define MappingRelationId 9104

CATALOG(pg_mapping,9104)
{
  Oid classoid; 
  Oid tupleoid;
  int8 item;
} FormData_pg_mapping;

typedef FormData_pg_mapping *Form_pg_mapping;

#define Natts_pg_mapping 3
#define Anum_pg_mapping_classoid 1
#define Anum_pg_mapping_tupleoid 2
#define Anum_pg_mapping_item 3

#endif

