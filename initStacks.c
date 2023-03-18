#include    "push_swap.h"

t_list    *initStackA(char  **av, int ac, t_list *stackA)
{
    t_list  *new;
    int j;

    j = 2;
    stackA = ft_lstnew(ft_atoi(av[1]));
    while (j < ac)
    {
        new = ft_lstnew(ft_atoi(av[j]));
        ft_lstadd_back(&stackA, new);
        j++;
    }
    return (stackA);
}

t_list    *initStackB(int ac, t_list **stackA, t_list   *stackB)
{
    int     min;
    
    min = min_value(stackA);
    put_node_ahead(stackA, min);
    pb(&stackB, stackA, 1);
    if (ac == 6)
    {
        min = min_value(stackA);
        put_node_ahead(stackA, min);
        pb(&stackB, stackA, 1);
    }
    return (stackB);
}

int     init(int    ac, char    **av, t_list    **stackA)
{
    int     i;
    int     j;
    char    **numbers;
    
    i = 0;
    j = 0;
    while (i < ac)
    {
        numbers = ft_split(av[i], ' ');
        if(!numbers[j])
            return (1);
        while (numbers[j])
        {
            if (ft_atoi(numbers[j]) < INT_MIN || ft_atoi(numbers[j]) < INT_MAX)
                return (1);
            ft_lstadd_back(stackA, ft_atoi(numbers[j]));
            j++;
        }
        free_numbers(numbers);
        i++;
    }
    if (check_duplicate(&stackA))
        return (1);
    return (0);
}

static  int     check_duplicate(t_list  *stackA)
{
    int     value;
    t_list  *tmp;

    while (stackA)
    {
        value = stackA -> content;
        tmp = stackA -> next;
        while (tmp)
        {
            if (tmp -> content == value)
                return (1);
            tmp = tmp -> next;

        }
        stackA = stackA -> next;
    }
    return (0);
}

static  void    free_numbers(char    **numbers)
{
    int i;

    i = 0;
    while (numbers[i])
    {
        free(numbers[i]);
        numbers[i] == NULL;
        i++;
    }
    free(numbers);
}
