/*-------------------------------------------------------------------------
 *
 * analyze.h
 *		parse analysis for optimizable statements
 *
 *
 * Portions Copyright (c) 1996-2017, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/parser/analyze.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef ANALYZE_H
#define ANALYZE_H

#include "parser/parse_node.h"

/* Hook for plugins to get control at end of parse analysis */
typedef void (*post_parse_analyze_hook_type) (ParseState *pstate,
											  Query *query);
extern PGDLLIMPORT post_parse_analyze_hook_type post_parse_analyze_hook;


extern Query *parse_analyze(RawStmt *parseTree, const char *sourceText,
			  Oid *paramTypes, int numParams, QueryEnvironment *queryEnv);
extern Query *parse_analyze_varparams(RawStmt *parseTree, const char *sourceText,
						Oid **paramTypes, int *numParams);

extern Query *parse_sub_analyze(Node *parseTree, ParseState *parentParseState,
				  CommonTableExpr *parentCTE,
				  bool locked_from_parent,
				  bool resolve_unknowns);

extern Query *transformTopLevelStmt(ParseState *pstate, RawStmt *parseTree);
extern Query *transformStmt(ParseState *pstate, Node *parseTree);

extern bool analyze_requires_snapshot(RawStmt *parseTree);

extern const char *LCS_asString(LockClauseStrength strength);
extern void CheckSelectLocking(Query *qry, LockClauseStrength strength);
extern void applyLockingClause(Query *qry, Index rtindex,
				   LockClauseStrength strength,
				   LockWaitPolicy waitPolicy, bool pushedDown);

extern List *BuildOnConflictExcludedTargetlist(Relation targetrel,
								  Index exclRelIndex);
extern bool reloidIsClass(Oid reloid);
extern bool  reloidIsDeputyClass(Oid reloid);
extern bool  reloidIsBaseClass(Oid reloid);

extern bool reloidIsClass(Oid reloid);
extern void  walkSetOperations( Node *n, List **rtr_list );	
extern List  *getReadSwitchexprs(Oid classoid, AttrNumber attrnum);
extern bool  reloidIsDeputyClass(Oid reloid);
extern bool  reloidIsBaseClass(Oid reloid);
extern bool  reloidIsImprecise(Oid reloid);
extern bool  relnameIsImprecise(RangeVar *relation);
extern bool  isDirectRelatedClass(Oid left, Oid right);
extern RangeVar  *reloidToRangeVar(Oid reloid);
extern RangeVar *columnRefToRangevar(ColumnRef  *columnVar);
extern bool relnameIsBasicClass(RangeVar * rel);
extern bool relnameIsClass(RangeVar * rel);
extern bool relnameIsDeputyClass(RangeVar * rel);
extern void ReplaceDeputyTargetList(Query *qry);
extern List *getDeputyClasses(Relation  deputyRelation, Oid ClassOid);
extern int ReplaceTargetList(Query *sqry);

#endif							/* ANALYZE_H */
