#include    "push_swap.h"

void    sort_five(t_list   **stacks)
{
    
    t_list  *tmp;
    
    sort_three(stacks[1]);
    if (stacks[0] -> content > stacks[0] -> next -> content)
       sb(&stacks[0], 1);
    //tmp = stacks[1];
    if(stacks[1] -> content > stacks[0] -> content)
        pa(&stacks[1], &stacks[0], 1);
    else
    {
        tmp = stacks[1];
        while(stacks[0] -> content > tmp -> content)
            tmp = tmp -> next;
    }


     //   while (tmp -> content < )
    t_list  *prt;  
    prt = stacks[1];
    while(prt)
    {
       printf("\n%i", prt->content);
       prt = prt->next;
    }
    return;
}