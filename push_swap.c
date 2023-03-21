#include    "push_swap.h"

void    clear(t_list    **stack)
{
    if (!stack || !(*stack))
        return ;
    clear(&(*stack)-> next);
    free(*stack);
    *stack = NULL;
}

int main(int ac, char   **av)
{
    t_list *stackA;
    t_list *stackB;
    
    if (ac == 1)
    {
        ft_putstr_fd("Error\n", 2);
        return (1);
    }
    stackA = NULL;
    stackB = NULL;
    // int i = 3;
    // while(i--)
    // {
    //     printf("\nEl valor de av[i] es: %s",av[i]);
    // }
    //stackA = initStackA(av, ac, stackA);
    if (init(ac, av, &stackA) == 1)
    {
        ft_putstr_fd("Error\n", 2);
        return (1);
    }
    else
    {
        if (ft_lstsize(stackA) == 2)
            sort_two(&stackA);
        else if (ft_lstsize(stackA) == 3)
            sort_three(&stackA);
        else if (ft_lstsize(stackA) == 4 || ft_lstsize(stackA) == 5)
        {
            stackB = initStackB(ac, &stackA, stackB);
            sort_four_five(&stackA, &stackB, ac);
        }
        else
        {
            giving_index(&stackA);
            radix_sort(&stackA, &stackB);
        }
    }
    // char s = 'd';
    // printf("\n es numero: %i", ft_isalpha(s));
    // printf("\n La lista A:");
    // printlist(stackA);
    // printf("\n Y la lista B:");
    // printlist(stackB);
    // clear(&stackA);
    // clear(&stackB);
    // system("leaks push_swap");
   
    return (0);
    // if (ac == 4)
    // {
    //     //stackA = initStackA(av, ac, stackA);
    //     sort_three(&stackA);
    // }
    // else if (ac == 5 || ac == 6)
    // {
    //     //stackA = initStackA(av, ac, stackA);
    //     stackB = initStackB(ac, &stackA, stackB);
    //     sort_small(&stackA, &stackB, ac);
    // }
    // else
    // {
    //     //stackA = initStackA(av, ac, stackA);
    //     giving_index(&stackA);
    //     radix_sort(&stackA, &stackB);
    // }
    
}