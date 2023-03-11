#include    "push_swap.h"

void    sort_three(t_list   *stackA)
{
   
    int first =stackA -> content;
    int second = stackA -> next -> content;
    int third = stackA -> next -> next -> content;
    if (second < first && third < first)
    {
        if (second > third)
            {
                sa(&stackA, 1);
                rra(&stackA, 1);
            }
        if (second < third)
            ra(&stackA, 1);
    }
    if (second < first && first < third)
        sa(&stackA, 1);
    if (first < second && first < third && second > third)
    {
            rra(&stackA, 1);
            sa(&stackA, 1);        
    }
    // t_list  *prt;
    // prt = stackA;
    // while(prt)
    // {   
    //    printf("%i\n", prt->content); 
    //    prt = prt->next;  
    // }
}