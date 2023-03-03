#include    "push_swap.h"
t_list    *initStackA(char **av, int   i, t_list *stack)
{
    int j = 2;
    t_list  *new;
    stack = ft_lstnew(av[1]);
    
    while(j <= i)
    {
        new = ft_lstnew(av[j]);
        ft_lstadd_back(&stack, new);
        j++;;
    }
    return (stack);
}