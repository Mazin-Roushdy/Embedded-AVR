#include <stdlib.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_interface.h"
#include "GIE_interface.h"
#include "OS.h"
u16 tickcounts=0;
task os_tasks[num_tasks]
void os_voidcreatetask(u8 id,u8 period,void (*ptr)(void))
{
    os_tasks[id].periodicity=period;
    os_tasks[id].fptr=ptr;
}

void os_voidstart(void)
{
    /* Configuring timer on CTC mode and choosing suitable OSR value that represents the smallest unit of time to count real time
     and Enabling GIE */

}

void scheduler (void)
{
    for(u8 i=0;i<num_tasks;i++)
    {
        if(tickcount%os_tasks[i].periodicity==0)
        {
            os_tasks[i].fptr();
        }
    }
}
timer_ISR(void)
{
    tickcounts++;
    if(tickcounts==ticktime)
    {
        tickcounts=0;
    }
    scheduler();
}
