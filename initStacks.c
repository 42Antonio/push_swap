#include    "push_swap.h"

//Use only for sort four or five

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
// COMPROBAR para valores mas pequeños que int o mayores

int     init(int    ac, char    **av, t_list    **stackA)
{
    int     i;
    int     j;
    char    **numbers;
    
    i = 1;
    while (i < ac)
    { 
        j = 0;
        numbers = ft_split(av[i], ' ');
        if(!numbers[j])
            return (1);
        while (numbers[j])
        {
            if (!ft_isdigit(*numbers[j]))
                return (1);
            if (ft_atoi(numbers[j]) < INT_MIN || ft_atoi(numbers[j]) > INT_MAX)
                return (1);
            ft_lstadd_back(stackA, ft_lstnew(ft_atoi(numbers[j])));
            j++;
        }
        free_numbers(numbers);
        i++;
    }
    if (ft_lstsize(*stackA) == 1)
        return (1);
    if (check_duplicate(*stackA))
        return (1);
    return (0);
}

int     check_duplicate(t_list  *stackA)
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

void    free_numbers(char    **numbers)
{
    int i;

    i = 0;
    while (numbers[i])
    {
        free(numbers[i]);
        numbers[i] = NULL;
        i++;
    }
    free(numbers);
}
