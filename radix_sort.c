/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:09:14 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/24 18:48:27 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

static	int	max_n_bits(t_list **stack)
{
	int		max;
	t_list	*list;
	int		max_n_bits;

	max_n_bits = 0;
	list = *stack;
	max = list -> index;
	while (list)
	{
		if (list -> index > max)
			max = list -> index;
		list = list -> next;
	}
	while (max >> max_n_bits)
		max_n_bits++;
	return (max_n_bits);
}

void	radix_sort(t_list **stackA, t_list **stackB)
{
	int		i;
	int		j;
	int		n_bits;
	int		len;
	t_list	*tmp;

	tmp = *stackA;
	i = -1;
	n_bits = max_n_bits(stackA);
	len = ft_lstsize(*stackA);
	while (++i < n_bits)
	{
		j = -1;
		while (tmp && ++j < len)
		{
			tmp = *stackA;
			if (((tmp->index >> i) & 1) == 0)
				pb(stackB, stackA, 1);
			else
				ra(stackA, 1);
		}
		while (ft_lstsize(*stackB) != 0)
			pa(stackA, stackB, 1);
	}
}
