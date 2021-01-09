#ifndef OS_H_INCLUDED
#define OS_H_INCLUDED

typedef struct
{
    u8 periodicity;
    u8 priority;
    void (*fptr)(void);
}task;

void os_voidcreatetask(u8 id,u8 period,void (*ptr)(void));
void os_voidstart(void);
static void scheduler(void);

#define num_tasks 2
#define ticktime 4000

#endif // OS_H_INCLUDED
