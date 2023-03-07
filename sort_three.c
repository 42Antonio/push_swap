#include    "push_swap.h"

void    sort_three(t_list   *stackA)
{
    //int i=1;
    t_list  *prt;
    int first = (int)(stackA -> content);
    int second = (int)(stackA -> next -> content);
    int third = (int)(stackA -> next -> next -> content);
    //stackB = ft_lstnew("8");
    
    //ra(&stackA);
    //char    *str;
    prt = stackA;
    if (second < first && third < first)
    {
        if (second > third)
            {
                rra(&stackA, 1);
                rra(&stackA, 1);
            }
        if (second < third)
            ra(&stackA, 0);
    }
    if (second < first && first < third)
        sa(&stackA, 1);
    if (first < second && first < third)
    {
        if (second > third)
        {
            ra(&stackA,0);
            sa(&stackA, 0);
            rra(&stackA, 0);
        }
    }
        
    // printf("\n%s", str);
    // print = stackA->next;
    // str = print->content;
    // printf("\n%s", str);
    // str = print->content;
    // printf("\n%s", str);
    // print = print->next;

    while(prt)
    {   
       printf("\n%s", prt->content); 
       prt = prt->next;  
    }

}