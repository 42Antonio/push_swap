#include    "push_swap.h"

static  int max_n_bits(t_list  **stack)
{
    int     max;
    t_list  *list;
    int     max_n_bits;

    max_n_bits = 0;
    list = *stack;
    max = list -> index;
    while (list)
    {
        if (list -> index > max)
            max = list -> index;
        list = list -> next;
    }
    while (max >> max_n_bits)
        max_n_bits++;
    return max_n_bits;
}

void    radix_sort(t_list   **stackA, t_list    **stackB)
{
    int     len;
    int     n_bits;
    int     i,j;
    t_list  *tmp;
    t_list  *tmp_b;

    tmp =   *stackA;
    len = ft_lstsize(*stackA);
    n_bits = max_n_bits(stackA);
    i = -1;
    while (++i < n_bits)
    {    
        j = -1;
        while (tmp && ++j < len)
        {
            tmp =   *stackA;
            if(((tmp->index >> i) & 1) == 0)
               pb(stackB, stackA, 1);          
            else
                ra(stackA, 1);
        }
        tmp_b = *stackB;
        while (tmp_b)
        {
            pa(stackA, stackB, 1);
                tmp_b = *stackB;
        }
    }
   
}