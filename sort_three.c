#include    "push_swap.h"

void    sort_three(t_list   *stackA)
{
    int i=1;
    char    *str;
    while(i <= 3)
    { 
        str = stackA->content;
        printf("\n%s", str);
        if(stackA ->next)
            *stackA = *stackA ->next;
        i++;      
    }

}