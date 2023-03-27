/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_a.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:06:57 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/23 12:07:22 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	sa(t_list **stackA, int flag)
{
	int		len;
	t_list	*third;
	t_list	*second;
	t_list	*new;

	new = NULL;
	len = ft_lstsize(*stackA);
	if (len > 1)
	{
		new = *stackA;
		second = new -> next;
		third = second->next;
		new -> next = third;
		second -> next = new;
		*stackA = second;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	ra(t_list **stackA, int flag)
{
	int		len;
	t_list	*last;
	t_list	*second;
	t_list	*new;

	new = NULL;
	len = ft_lstsize(*stackA);
	if (len > 1)
	{
		new = *stackA;
		last = ft_lstlast(new);
		second = new -> next;
		last -> next = new;
		new -> next = NULL;
		*stackA = second;
	}
	if (flag == 1)
		write(1, "ra\n", 3);
}

void	rra(t_list **stackA, int flag)
{
	int		len;
	int		i;
	t_list	*last;
	t_list	*new;

	new = NULL;
	i = 1;
	len = ft_lstsize(*stackA);
	if (len > 1)
	{
		new = *stackA;
		last = ft_lstlast(new);
		while (i < len - 1)
		{
			new = new -> next;
			i++;
		}
		new -> next = NULL;
		last->next = *stackA;
		*stackA = last;
	}
	if (flag == 1)
		write(1, "rra\n", 4);
}

void	pa(t_list **stackA, t_list **stackB, int flag)
{
	t_list	*new;
	t_list	*firstb;
	int		lenb;

	lenb = ft_lstsize(*stackB);
	if (lenb == 0)
		return ;
	new = *stackB;
	firstb = new -> next;
	ft_lstadd_front(stackA, new);
	if (flag)
		write(1, "pa\n", 3);
	*stackB = firstb;
}
