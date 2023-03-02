#include    "push_swap.h"
int main(int ac, char   **av)
{
    int i = 2;
    //char    *str;
    t_list *stackA;
    stackA = ft_lstnew(av[1]);

    if (ac == 4)
    {
        // stackA = ft_lstnew(av[1]);
        // *stackA = initStackA(av, 3, stackA);
        while(av[i] && i<ac)
    {
        ft_lstadd_front(&(stackA ->next), ft_lstnew(av[i]));
        i++;
        
    } 
        sort_three(stackA);
    }
    else
        printf("\nTODAVIA NO");
}

