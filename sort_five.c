#include    "push_swap.h"

void    sort_five(t_list   **stacks)
{
    t_list  *prt;
    // int first =ft_atoi(stackA -> content);
    // int second = ft_atoi(stackA -> next -> content);
    // //int third = ft_atoi(stackA -> next -> next -> content);
    
    // if (second < first && third < first)
    // {
    //     if (second > third)
    //         {
    //             sa(&stackA, 1);
    //             rra(&stackA, 1);
    //         }
    //     if (second < third)
    //         ra(&stackA, 1);
    // }
    // if (second < first && first < third)
    //     sa(&stackA, 1);
    // if (first < second && first < third && second > third)
    // {
    //         ra(&stackA,1);
    //         sa(&stackA, 1);
    //         rra(&stackA, 1);
    // }
    prt = stacks[1];
    while(prt)
    {   
       printf("\n%s", prt->content); 
       prt = prt->next;  
    }
    //(void)stacks;
    return;
}