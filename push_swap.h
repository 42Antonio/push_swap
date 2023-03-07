#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
//ELIMINAR LA lIBREIRA STDIO
#   include    <stdio.h>

void    sort_three(t_list   *stackA);
t_list  *initStackA(char **av, int   i, t_list   *stack);
void    sa(t_list   **stackA, int   flag);
void    ra(t_list   **stackA, int   flag);
void    sb(t_list   **stackB, int   flag);
void    rb(t_list   **stackB, int   flag);
void    rra(t_list   **stackA, int   flag);
void    rra(t_list   **stackB, int   flag);
void    ss(t_list   **stackA,t_list   **stackB);
void    rr(t_list   **stackA,t_list   **stackB);
void    rrr(t_list   **stackA,t_list   **stackB);

#endif