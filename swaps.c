#include    "push_swap.h"

void    sa(t_list   *stackA)
{
    int len;
    t_list  *third;
    t_list  *second;
    t_list  *primero;

    len = ft_lstsize(stackA);
    if(len <= 1)
        return;
    else
    {
        primero = stackA;
        second = stackA ->next;
        printf("\nEl segundo es:%s", second->content);
        printf("\nEl que apunta second es:%s", (second ->next)->content);
        third = (stackA->next) -> next;
        stackA -> next = third;
        second ->next= primero;
        printf("\nEl primero es:%s", primero->content);
        printf("\nEl que apunta primero es:%s", (primero ->next)->content);
        //second = stackA;
        printf("\nEl A es:%s", stackA->content);
        printf("\nEl que apunta A es:%s", (stackA ->next)->content);
        printf("\nEl segundo es:%s", second->content);
        printf("\nEl que apunta second es:%s", (second ->next)->content);
    }
    write(1, "sa",2);
}