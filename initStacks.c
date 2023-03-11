#include    "push_swap.h"

t_list    *initStackA(char **av, int   i, t_list *stack)
{
    int j = 2;
    t_list  *new;
    stack = ft_lstnew(ft_atoi(av[1]));
    
    while(j <= i)
    {
        new = ft_lstnew(ft_atoi(av[j]));
        ft_lstadd_back(&stack, new);
        j++;
    }
    return (stack);
}
t_list    **initStacks(char  **av, t_list **stacks)
{
    t_list  *stackB;
    t_list  *stackA;
    t_list  *new;
    int j;

    // stackB =(t_list  *)malloc(2 * sizeof(t_list));
    // stackA =(t_list  *)malloc(3 * sizeof(t_list));
    j = 4;
    stackB = ft_lstnew(ft_atoi(av[1]));
    new = ft_lstnew(ft_atoi(av[2]));
    ft_lstadd_back(&stackB, new);
    stackA = ft_lstnew(ft_atoi(av[3]));
    while (j <= 5)
    {
        new = ft_lstnew(ft_atoi(av[j]));
        ft_lstadd_back(&stackA, new);
        j++;
    }
    write(1, "pb\n", 3);
    write(1, "pb\n", 3);
    stacks[0] = stackB;
    stacks[1] = stackA;
    return (stacks);
}