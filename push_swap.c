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
        ft_putchar_fd("Error\n", 2);
        return (1);
    }
    stackA = NULL;
    stackB = NULL;
    //stackA = initStackA(av, ac, stackA);
    if (init(av, ac, stackA) == 1)
    {
        ft_putchar_fd("Error\n", 2);
        return (1);
    }
    else
    {
        if (ac == 4)
            sort_three(&stackA);
        else if (ac == 5 || ac == 6)
        {
            stackB = initStackB(ac, &stackA, stackB);
            sort_small(&stackA, &stackB, ac);
        }
        else
        {
            giving_index(&stackA);
            radix_sort(&stackA, &stackB);
        }
    }
    clear(&stackA);
    clear(&stackB);
    system("leaks push_swap");
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
    // printf("\n La lista A:");
    // printlist(stackA);
    // printf("\n Y la lista B:");
    // printlist(stackB);
}