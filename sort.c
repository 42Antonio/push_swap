#include    "push_swap.h"

void    sort(t_list   *stackA)
{
    //int i=0;
    t_list  *prt;
    // int first =ft_atoi(stackA -> contentç);
    // int second = ft_atoi(stackA -> next -> contentç);
    // int third = ft_atoi(stackA -> next -> next -> contentç);
    //stackB = ft_listnew("8");
    sa(&stackA, 1);
    prt = stackA;
    while(prt)
    {   
        printf("\n%i", prt->content); 
        prt = prt->next;  
    //i++;
    }
    //printf("\nEl avlor de i es:%i", i);

}

// void    sort_three(t_list   **stack)
// {
//     t_list  *tmp;

//     tmp = *stack;
//     if ((tmp -> next -> content < tmp -> content)
//         && (tmp -> next -> next -> content < tmp -> content))
//     {
//         if (tmp -> next -> content > tmp -> next -> next -> content)
//             {
//                 sa(stack, 1);
//                 rra(stack, 1);
//             }
//         if (tmp -> next -> content < tmp -> next -> next -> content)
//             ra(stack, 1);
//     }
//     if ((tmp -> next -> content < tmp -> content)
//         && (tmp -> content < tmp -> next -> next -> content))
//         sa(stack, 1);
//     if ((tmp -> content < tmp -> next -> content)
//         && (tmp -> content < tmp -> next -> next -> content)
//         && (tmp -> next -> content > tmp -> next -> next -> content))
//     {
//             rra(stack, 1);
//             sa(stack, 1);        
//     }
// }