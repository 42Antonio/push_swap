/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:09:25 by aclaros-          #+#    #+#             */
/*   Updated: 2023/04/01 11:22:30 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	sort(t_list **stacka, t_list **stackb)
{
	if (ft_lstsize(*stacka) == 2 || ft_lstsize(*stacka) == 3)
		sort_two_three(stacka, ft_lstsize(*stacka));
	else if (ft_lstsize(*stacka) == 4 || ft_lstsize(*stacka) == 5)
		sort_four_five(stacka, stackb);
	else
	{
		giving_index(stacka);
		radix_sort(stacka, stackb);
	}
}

void	sort_two_three(t_list **stacka, int i)
{
	if (i == 2)
	{
		if ((*stacka)-> content > (*stacka)-> next -> content)
			sa(stacka, 1);
	}
	if (i == 3)
		sort_three(stacka);
}

void	sort_three(t_list **stack)
{
	if (((*stack)-> next -> content < (*stack)-> content)
		&& ((*stack)-> next -> next -> content < (*stack)-> content))
	{
		if ((*stack)-> next -> content > (*stack)-> next -> next -> content)
			sa(stack, 1);
		else if ((*stack)-> next -> content
			< (*stack)-> next -> next -> content)
			ra(stack, 1);
	}
	if (((*stack)-> content < (*stack)-> next -> content)
		&& ((*stack)-> next -> content > (*stack)-> next -> next -> content))
	{
		if ((*stack)-> content < (*stack)-> next -> next -> content)
		{
			rra(stack, 1);
			sa(stack, 1);
		}
		else
			rra(stack, 1);
	}
	else if (((*stack)-> next -> content < (*stack)-> content)
		&& ((*stack)-> content < (*stack)-> next -> next -> content))
		sa(stack, 1);
}

void	sort_four_five(t_list **stacka, t_list **stackb)
{
	int	j;

	j = 0;
	stackb = init_stackb(stacka, stackb);
	sort_three(stacka);
	while (j < ft_lstsize(*stackb) + 1)
	{
		pa(stacka, stackb, 1);
		j++;
	}
}

int	is_sorted(t_list	**stacka)
{
	t_list	*tmp;

	tmp = *stacka;
	while (tmp -> next)
	{
		if (tmp -> content > tmp -> next -> content)
			return (0);
		tmp = tmp -> next;
	}
	return (1);
}
