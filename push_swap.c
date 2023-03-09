#include    "push_swap.h"
int main(int ac, char   **av)
{
    t_list *stackA = NULL;
    //t_list *stackB = NULL;
    t_list **stacks = NULL;

    if (ac == 4)
    {
        stackA = initStackA(av, 3, stackA);
        sort_three(stackA);
    }
    else if (ac == 6)
    {
        initStacks(av, stacks);
        sort_five(stacks);
    }  
    else
        printf("\nTODAVIA NO");
}

