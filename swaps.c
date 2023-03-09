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
        second = new -> next;
        third = second->next;
        new -> next = third;
        second ->next= new;
        *stackA = second;
    }
    if (flag == 1)
        write(1, "sa\n", 3);
    
    // t_list  *prt;
    // prt = *stackA;
    // while(prt)
    // {   
    //     printf("\n%s", (char *)(prt->content)); 
    //     prt = prt->next;  
    // }
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
        write(1, "sb\n", 3);
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
        write(1, "ra\n", 3);
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
        write(1, "rb\n",3);
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
        write(1, "rra\n", 4);
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
        write(1, "rrb\n", 4);
}

void    ss(t_list   **stackA,t_list   **stackB)
{
    sa(stackA, 0);
    sb(stackB, 0);
    write(1, "ss\n", 3);
}

void    rr(t_list   **stackA,t_list   **stackB)
{
    ra(stackA, 0);
    rb(stackB, 0);
    write(1, "rr\n", 3);
}

void    rrr(t_list   **stackA,t_list   **stackB)
{
    rra(stackA, 0);
    rrb(stackB, 0);
    write(1, "rrr\n", 4);
}

// void	pa(t_list **stackA, t_list   **stackB, int flag)
// {
// 	t_stack	*tmp;
// 	t_stack	*new;
//     int lenB;
//     int lenA;

// 	lenB = ft_lstsize(*stackB);
//     lenA = ft_lstsize(*stackA);
//     if (len == 0)
// 		return ;
// 	*tmp = *stackB;
// 	//stacks->size_a++;
// 	new = ft_lstlast(stackB);
// 	if (!new)
// 		exit(1);
// 	ft_lstadd_front(stackA, new);
//     while (len > 1)
//     {
//         tmp = tmp -> next;
//     }
//     tmp -> next  = NULL;
// 	free(tmp);
// 	if (flag)
// 		write(1, "pa\n", 3);
// }

// void	do_pb(t_stacks *stacks, int flag)
// {
// 	t_stack	*tmp;
// 	t_stack	*new;

// 	if (!stacks->size_a)
// 		return ;
// 	tmp = stacks->stack_a;
// 	stacks->size_b++;
// 	new = new_list(stacks->stack_a->num, stacks->stack_a->index);
// 	if (!new)
// 		exit(1);
// 	list_add_front(&stacks->stack_b, new);
// 	stacks->stack_a = stacks->stack_a->next;
// 	free(tmp);
// 	stacks->size_a--;
// 	if (flag)
// 		write(1, "pb\n", 3);
// }