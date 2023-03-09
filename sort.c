#include    "push_swap.h"

void    sort(t_list   *stackA)
{
    //int i=0;
    t_list  *prt;
    // int first =ft_atoi(stackA -> content);
    // int second = ft_atoi(stackA -> next -> content);
    // int third = ft_atoi(stackA -> next -> next -> content);
    //stackB = ft_lstnew("8");
    sa(&stackA, 1);
    prt = stackA;
    while(prt)
    {   
        printf("\n%s", (char *)(prt->content)); 
        prt = prt->next;  
    //i++;
    }
    //printf("\nEl avlor de i es:%i", i);

}