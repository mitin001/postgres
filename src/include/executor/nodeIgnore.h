/*-------------------------------------------------------------------------
 *
 * nodeIgnore.h
 *
 *
 *
 * a mirror of nodeLimit.h
 *
 * src/include/executor/nodeIgnore.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODEIGNORE_H
#define NODEIGNORE_H

#include "nodes/execnodes.h"

extern IgnoreState *ExecInitIgnore(Ignore *node, EState *estate, int eflags);
extern TupleTableSlot *ExecIgnore(IgnoreState *node);
extern void ExecEndIgnore(IgnoreState *node);
extern void ExecReScanIgnore(IgnoreState *node);

#endif   /* NODEIGNORE_H */
