/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps_b.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:07:46 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/23 12:07:50 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	sb(t_list **stackB, int flag)
{
	int		len;
	t_list	*third;
	t_list	*second;
	t_list	*new;

	new = NULL;
	len = ft_lstsize(*stackB);
	if (len > 1)
	{
		new = *stackB;
		second = new -> next;
		third = second->next;
		new -> next = third;
		second -> next = new;
		*stackB = second;
	}
	if (flag == 1)
		write(1, "sa\n", 3);
}

void	rb(t_list **stackB, int flag)
{
	int		len;
	t_list	*last;
	t_list	*second;
	t_list	*new;

	new = NULL;
	len = ft_lstsize(*stackB);
	if (len > 1)
	{
		new = *stackB;
		last = ft_lstlast(new);
		second = new->next;
		last->next = new;
		new -> next = NULL;
		*stackB = second;
	}
	if (flag == 1)
		write(1, "rb\n", 3);
}

void	rrb(t_list **stackB, int flag)
{
	int		len;
	t_list	*last;
	t_list	*b_last;
	t_list	*new;

	new = NULL;
	len = ft_lstsize(*stackB);
	if (len > 1)
	{
		new = *stackB;
		last = ft_lstlast(new);
		while (len--)
			b_last = new -> next;
		b_last -> next = NULL;
		last->next = *stackB;
		*stackB = last;
	}
	if (flag == 1)
		write(1, "rrb\n", 4);
}

void	pb(t_list **stackB, t_list **stackA, int flag)
{
	t_list	*new;
	t_list	*firsta;
	int		lena;

	lena = ft_lstsize(*stackA);
	if (lena == 0)
		return ;
	new = *stackA;
	firsta = new -> next;
	ft_lstadd_front(stackB, new);
	if (flag)
		write(1, "pb\n", 3);
	*stackA = firsta;
}
