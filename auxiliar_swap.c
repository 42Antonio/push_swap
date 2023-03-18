#include    "push_swap.h"

void    put_node_ahead(t_list    **stackA, int number)
{
    t_list  *temp;
    int     n;
    int     lenA;

    n = 1;
    temp = *stackA;

    // See whether the node we want to move is closer to the end or to the head of the list
    
    while (temp && ((temp -> content) != number))
    {
       temp = temp ->next; 
       n++;
    }
    lenA = ft_lstsize(*stackA);
    if (n > 1 && n - 1 <= lenA/2)
    {
        while(n > 1)
        {
            ra(stackA, 1);
            n--;
        }
    }
    else if (n > lenA/2)
    {
        while(n - lenA/2 > 0 && n < lenA + 1)
        {
            rra(stackA, 1);
            n++;
        }
    }
}