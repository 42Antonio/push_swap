#include    "push_swap.h"

// Sorting 4 or 5 elemnts

void    sort_small(t_list   **stackA, t_list **stackB, int ac)
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