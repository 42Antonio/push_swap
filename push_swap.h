#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
//ELIMINAR LA lIBREIRA STDIO
#   include    <stdio.h>

void    sort_two(t_list **stackA);
void    sort_three(t_list   **stackA);
void    sort_four_five(t_list   **stackA, t_list **stackB, int ac);
void    radix_sort(t_list   **stackA, t_list    **stackB);
void    sort_small(t_list   **stackA, t_list **stackB, int ac);
//t_list  *initStackA(char  **av, int   ac, t_list *stackA);
t_list  *initStackB(int ac, t_list **stackA, t_list   *stackB);
int     init(int    ac, char    **av, t_list    **stackA);
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
void	pb(t_list **stackA, t_list   **stackB, int flag);
int     min_value(t_list     **list);
void    giving_index(t_list    **list);
void    put_node_ahead(t_list    **stackA, int  number);
void    free_numbers(char    **numbers);
int     check_duplicate(t_list  *stackA);
void    printlist(t_list   *stack);
void    printindex(t_list   *stack);
#endif