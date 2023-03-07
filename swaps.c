#include    "push_swap.h"

void    sa(t_list  **stackA, int    flag)
{
    int len;
    t_list  *third;
    t_list  *second;
    t_list  *new = NULL;

    len = ft_lstsize(*stackA);
    // if(len <= 1)
    //     return NULL;
    // else
    if (len > 1)
    {
        new = *stackA;
        second = new->next;
        third = second->next;
        new -> next = third;
        second ->next= new;
        *stackA = second;
    }
    if (flag == 1)
        write(1, "sa", 2);
}
void    sb(t_list   **stackB, int    flag)
{
    int len;
    t_list  *third;
    t_list  *second;
    t_list  *new = NULL;

    len = ft_lstsize(*stackB);
    // if(len <= 1)
    //     return NULL;
    // else
    if (len > 1)
    {
        new = *stackB;
        second = new->next;
        third = second->next;
        new -> next = third;
        second ->next= new;
        *stackB = second;
    }
    if (flag == 1)
        write(1, "sb", 2);
}

void  ra(t_list   **stackA, int    flag)
{
    int     len;
    t_list  *last;
    t_list  *second;
    t_list  *new = NULL;

    len = ft_lstsize(*stackA);
    // if(len < 1)
    //     return NULL;
    // if (len == 1)
    //     return (stackB);
    if (len > 1)
    {
        new = *stackA;
        last = ft_lstlast(new);
        second = new->next;
        last->next= new;
        new -> next = NULL;
        *stackA = second;
    }
    if (flag == 1)
        write(1, "ra",2);
}

void    rb(t_list   **stackB, int    flag)
{
    int     len;
    t_list  *last;
    t_list  *second;
    t_list  *new = NULL;

    len = ft_lstsize(*stackB);
    // if(len < 1)
    //     return NULL;
    // if (len == 1)
    //     return (stackB);
    if (len > 1)
    {
        new = *stackB;
        last = ft_lstlast(new);
        second = new->next;
        last->next= new;
        new -> next = NULL;
        *stackB = second;
    }
    if (flag == 1)
        write(1, "rb",2);
}
void    rra(t_list   **stackA, int    flag)
{
    int     len;
    t_list  *last;
    t_list  *b_last;
    t_list  *new = NULL;

    len = ft_lstsize(*stackA);
    // if(len < 1)
    //     return NULL;
    // if (len == 1)
    //     return (stackB);
    if (len > 1)
    {
        new = *stackA;
        last = ft_lstlast(new);
        while (len--)
            b_last = new -> next;
        b_last -> next = NULL;
        last->next= *stackA;
        *stackA = last;
    }
    if (flag == 1)
        write(1, "rra",2);
}

void    rrb(t_list   **stackB, int    flag)
{
    int     len;
    t_list  *last;
    t_list  *b_last;
    t_list  *new = NULL;

    len = ft_lstsize(*stackB);
    // if(len < 1)
    //     return NULL;
    // if (len == 1)
    //     return (stackB);
    if (len > 1)
    {
        new = *stackB;
        last = ft_lstlast(new);
        while (len--)
            b_last = new -> next;
        b_last -> next = NULL;
        last->next= *stackB;
        *stackB = last;
    }
    if (flag == 1)
        write(1, "rrb",2);
}

void    ss(t_list   **stackA,t_list   **stackB)
{
    sa(stackA, 0);
    sb(stackB, 0);
    write(1, "ss",2);
}

void    rr(t_list   **stackA,t_list   **stackB)
{
    ra(stackA, 0);
    rb(stackB, 0);
    write(1, "rr",2);
}

void    rrr(t_list   **stackA,t_list   **stackB)
{
    rra(stackA, 0);
    rrb(stackB, 0);
    write(1, "rrr",2);
}

