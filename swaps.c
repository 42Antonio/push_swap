#include    "push_swap.h"

t_list  *sa(t_list   *stackA)
{
    int len;
    t_list  *third;
    t_list  *second;

    len = ft_lstsize(stackA);
    if(len <= 1)
        return NULL;
    else
    {
        second = stackA->next;
        third = second->next;
        stackA -> next = third;
        second ->next= stackA;
    }
    write(1, "sa",2);
    return(second);
}
t_list  *sb(t_list   *stackB)
{
    int len;
    t_list  *third;
    t_list  *second;

    len = ft_lstsize(stackB);
    if(len <= 1)
        return NULL;
    else
    {
        second = stackB->next;
        third = second->next;
        stackB -> next = third;
        second ->next= stackB;
    }
    write(1, "sb",2);
    return(second);
}
t_list  *ra(t_list   *stackA)
{
    int     len;
    t_list  *last;
    t_list  *second;

    len = ft_lstsize(stackA);
    if(len < 1)
        return NULL;
    if (len == 1)
        return (stackA);
    else
    {
        last = ft_lstlast(stackA);
        second = stackA->next;
        last->next= stackA;
        stackA -> next = NULL;
    }
    write(1, "ra",2);
    return(second);
}

t_list  *rb(t_list   *stackB)
{
    int     len;
    t_list  *last;
    t_list  *second;

    len = ft_lstsize(stackB);
    if(len < 1)
        return NULL;
    if (len == 1)
        return (stackB);
    else
    {
        last = ft_lstlast(stackB);
        second = stackB->next;
        last->next= stackB;
        stackB -> next = NULL;
    }
    write(1, "rb",2);
    return(second);
}

