#include    "push_swap.h"

void    sort_two(t_list **stackA)
{
    if ((*stackA) -> content >  (*stackA) -> next -> content)
        sa(stackA, 1);
}

void    sort_three(t_list   **stack)
{
    if (((*stack) -> next -> content < (*stack) -> content)
        && ((*stack) -> next -> next -> content < (*stack) -> content))
    {
        if ((*stack) -> next -> content > (*stack) -> next -> next -> content)
                sa(stack, 1);
        else if((*stack)-> next -> content < (*stack) -> next -> next -> content)
            ra(stack, 1);
    }
    if (((*stack) -> content < (*stack)-> next -> content)
        && ((*stack) -> next -> content > (*stack) -> next -> next -> content))
    {
            if ((*stack) -> content < (*stack) -> next -> next -> content)
            {
                rra(stack, 1);
                sa(stack, 1);
            }
            else
                rra(stack, 1);       
    }
    else if (((*stack) -> next -> content < (*stack) -> content)
        && ((*stack) -> content < (*stack)-> next -> next -> content))
        sa(stack, 1);
}

/*
Cases: 
    135l   153l   315l    -351-    513l      531l
*/

void    sort_four_five(t_list   **stackA, t_list **stackB, int ac)
{    
    int j;

    j = 4;
    sort_three(stackA);
    while (j < ac)
    {
        pa(stackA, stackB, 1);
        j++;
    }
}