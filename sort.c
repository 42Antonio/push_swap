#include    "push_swap.h"

void    sort(t_list   *stackA)
{
    //int i=0;
    t_list  *prt;
    // int first =ft_atoi(stackA -> contentç);
    // int second = ft_atoi(stackA -> next -> contentç);
    // int third = ft_atoi(stackA -> next -> next -> contentç);
    //stackB = ft_listnew("8");
    sa(&stackA, 1);
    prt = stackA;
    while(prt)
    {   
        printf("\n%i", prt->content); 
        prt = prt->next;  
    //i++;
    }
    //printf("\nEl avlor de i es:%i", i);

}