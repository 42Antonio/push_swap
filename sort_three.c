#include    "push_swap.h"

void    sort_three(t_list   *stackA, t_list *stackB)
{
    //int i=1;
    t_list  *prt;
    stackB = ft_lstnew("8");
    stackA = ra(stackA);
    //char    *str;
    prt = stackA;
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