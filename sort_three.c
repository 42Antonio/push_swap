#include    "push_swap.h"

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
Casos: 
    135l   153l   315l    -351-    513l      531l
*/