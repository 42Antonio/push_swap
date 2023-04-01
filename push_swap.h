/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:12:59 by aclaros-          #+#    #+#             */
/*   Updated: 2023/04/01 11:20:34 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdio.h>

void	sort_two_three(t_list **stacka, int i);
void	sort_three(t_list **stackA);
void	sort_four_five(t_list **stackA, t_list **stackB);
void	sort(t_list **stacka, t_list **stackb);
void	radix_sort(t_list **stackA, t_list **stackB);
int		is_sorted(t_list **stacka);
t_list	**init_stackb(t_list **stacka, t_list **stackb);
int		init(int ac, char **av, t_list **stackA);
void	sa(t_list **stackA, int flag);
void	ra(t_list **stackA, int flag);
void	sb(t_list **stackB, int flag);
void	rb(t_list **stackB, int flag);
void	rra(t_list **stackA, int flag);
void	rrb(t_list **stackB, int flag);
void	ss(t_list **stackA, t_list **stackB);
void	rr(t_list **stackA, t_list **stackB);
void	rrr(t_list **stackA, t_list **stackB);
void	pa(t_list **stackA, t_list **stackB, int flag);
void	pb(t_list **stackA, t_list **stackB, int flag);
int		min_value(t_list **list);
void	giving_index(t_list	**list);
void	put_node_ahead(t_list **stackA, int number);
void	aux_put_node_ahead(int n, int len_a, t_list **stackA);
void	free_numbers(char **numbers);
int		check_duplicate(t_list *stackA);
void	printlist(t_list *stack);
void	printindex(t_list *stack);
#endif
