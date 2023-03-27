/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   auxiliar_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:08:25 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/27 14:44:25 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	put_node_ahead(t_list	**stackA, int number)
{
	int		n;
	int		len_a;
	t_list	*temp;

	n = 1;
	temp = *stackA;
	while (temp && ((temp -> content) != number))
	{
		temp = temp ->next;
		n++;
	}
	len_a = ft_lstsize(*stackA);
	aux_put_node_ahead(n, len_a, stackA);
}

// This function has been created only to obey 42 rules, so the previous function
// wouldn´t have more than 25 lines. 

void	aux_put_node_ahead(int n, int len_a, t_list **stackA)
{
	if (n > 1 && n - 1 <= len_a / 2)
	{
		while (n > 1)
		{
			ra(stackA, 1);
			n--;
		}
	}
	else if (n > len_a / 2)
	{
		while (n - len_a / 2 > 0 && n < len_a + 1)
		{
			rra(stackA, 1);
			n++;
		}
	}
}
