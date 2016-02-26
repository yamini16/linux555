
//#ifndef _SCHED_DEADLINE_H
//#define _SCHED_DEADLINE_H

/*
 * SCHED_DEADLINE tasks has negative priorities, reflecting
 * the fact that any of them has higher prio than RT and
 * NORMAL/BATCH tasks.
 */

/*
#define MAX_DL_PRIO		0

static inline int dl_prio(int prio)
{
	if (unlikely(prio < MAX_DL_PRIO))
		return 1;
	return 0;
}

static inline int dl_task(struct task_struct *p)
{
	return dl_prio(p->prio);
}

#endif */
/* _SCHED_DEADLINE_H */


#ifndef _SCHED_LLF_H
#define _SCHED_LLF_H

/*
 * SCHED_DEADLINE tasks has negative priorities, reflecting
 * the fact that any of them has higher prio than RT and
 * NORMAL/BATCH tasks.
 */

#define MAX_LLF_PRIO		0

static inline int llf_prio(int prio)
{
	if (unlikely(prio < MAX_LLF_PRIO))
		return 1;
	return 0;
}

static inline int llf_task(struct task_struct *p)
{
	return llf_prio(p->prio);
}

#endif /* _SCHED_LLF_H */

