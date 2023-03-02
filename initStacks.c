#include    "push_swap.h"
t_list    initStackA(char **av, int   i, t_list *stack)
{
    //int j = 2;
    while(i > 1)
    {
        ft_lstadd_front(&stack, ft_lstnew(av[i]));
        i--;
    }
    return (*stack);
}