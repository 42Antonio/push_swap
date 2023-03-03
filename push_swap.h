#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
//ELIMINAR LA lIBREIRA STDIO
#   include    <stdio.h>

void    sort_three(t_list   *stackA, t_list *stackB);
t_list  *initStackA(char **av, int   i, t_list   *stack);
t_list  *sa(t_list   *stackA);
t_list  *ra(t_list   *stackA);
t_list  *sb(t_list   *stackB);
t_list  *rb(t_list   *stackB);

#endif