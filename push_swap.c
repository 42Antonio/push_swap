/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:08:57 by aclaros-          #+#    #+#             */
/*   Updated: 2023/04/01 11:20:19 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

void	clear(t_list	**stack)
{
	if (!stack || !(*stack))
		return ;
	clear(&(*stack)-> next);
	free(*stack);
	*stack = NULL;
}

// This function was placed into the initStacks.c file but to obey 42 rules was moved here. 

int	check_duplicate(t_list	*stackA)
{
	int		value;
	t_list	*tmp;

	while (stackA)
	{
		value = stackA -> content;
		tmp = stackA -> next;
		while (tmp)
		{
			if (tmp -> content == value)
				return (1);
			tmp = tmp -> next;
		}
		stackA = stackA -> next;
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;

	if (ac == 1)
		return (0);
	stacka = NULL;
	stackb = NULL;
	if (init(ac, av, &stacka) == 1)
	{
		clear(&stacka);
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	else if (ft_lstsize(stacka) == 1)
	{
		clear(&stacka);
		return (0);
	}
	if (!is_sorted(&stacka))
		sort(&stacka, &stackb);
	clear(&stacka);
	clear(&stackb);
	return (0);
}
