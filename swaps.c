/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 11:43:15 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/27 14:49:41 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	ss(t_list **stackA, t_list **stackB)
{
	sa(stackA, 0);
	sb(stackB, 0);
	write(1, "ss\n", 3);
}

void	rr(t_list **stackA, t_list **stackB)
{
	ra(stackA, 0);
	rb(stackB, 0);
	write(1, "rr\n", 3);
}

void	rrr(t_list **stackA, t_list **stackB)
{
	rra(stackA, 0);
	rrb(stackB, 0);
	write(1, "rrr\n", 4);
}
