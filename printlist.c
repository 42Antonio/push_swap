#include    "push_swap.h"

void    printlist(t_list   *stack)
{
    t_list  *prtA = NULL;
    prtA = stack;
    while(prtA)
    {   
       printf("\n%i", prtA->content); 
       prtA = prtA->next;
    }
}
void   printindex(t_list   *stack)
{
    t_list  *prtA = NULL;
    prtA = stack;
    while(prtA)
    {   
       printf("\n%i", prtA->index); 
       prtA = prtA->next;
    }
}