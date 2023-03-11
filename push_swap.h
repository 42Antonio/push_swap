#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
//ELIMINAR LA lIBREIRA STDIO
#   include    <stdio.h>

void    sort_three(t_list   *stackA);
void    sort_five(t_list   **stacks);
void    sort(t_list   *stackA);
t_list  *initStackA(char **av, int   i, t_list   *stack);
t_list  **initStacks(char  **av, t_list **stacks);
void    sa(t_list   **stackA, int   flag);
void    ra(t_list   **stackA, int   flag);
void    sb(t_list   **stackB, int   flag);
void    rb(t_list   **stackB, int   flag);
void    rra(t_list   **stackA, int   flag);
void    rra(t_list   **stackB, int   flag);
void    ss(t_list   **stackA,t_list   **stackB);
void    rr(t_list   **stackA,t_list   **stackB);
void    rrr(t_list   **stackA,t_list   **stackB);
void	pa(t_list **stackA, t_list   **stackB, int flag);
void    index_to_min(t_list     **list);
t_list  *giving_index(t_list    *list);

#endif