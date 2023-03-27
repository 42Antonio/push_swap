/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initStacks.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 12:23:22 by aclaros-          #+#    #+#             */
/*   Updated: 2023/03/27 14:49:46 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

// This function is only used to sort 4 or 5 nunmbers

t_list	**init_stackb(int ac, t_list **stacka, t_list **stackb)
{
	int	min;

	min = min_value(stacka);
	put_node_ahead(stacka, min);
	pb(stackb, stacka, 1);
	if (ac == 6)
	{
		min = min_value(stacka);
		put_node_ahead(stacka, min);
		pb(stackb, stacka, 1);
	}
	return (stackb);
}

// This function wierd name has been created only to obey 42 rules, so the check_numbers
// function would not have a too long line. It is used not to discard a number becasue 
// it is preceded by the negatiuve signed. Notice that non numerical at the input 
// caracter make the sort to be cancelled. 

int	er(char	*number)
{
	int	i;

	i = 1;
	if (ft_strlen(number) == 1)
		return (ft_isdigit(number[0]));
	else if (ft_strlen(number) >= 2)
	{
		if (number[0] != '-' && !ft_isdigit(number[0]))
			return (0);
		else
		{
			while (number[i])
			{
				if (!ft_isdigit(number[i]))
					return (0);
				i++;
			}
		}
	}
	return (1);
}

int	check_numbers(int ac, char	**av)
{
	char	**n;
	int		i;
	int		j;
	int		flag;

	i = 0;
	flag = 0;
	while (++i < ac)
	{
		j = 0;
		n = ft_split(av[i], ' ');
		if (!n[j])
			flag = 1;
		while (n[j])
		{
			if (!er(n[j]) || (atoli(n[j]) < INT_MIN || atoli(n[j]) > INT_MAX))
				flag = 1;
			j++;
		}
		free_numbers(n);
	}
	if (flag == 1)
		return (1);
	return (0);
}

int	init(int ac, char **av, t_list **stackA)
{
	int		i;
	int		j;
	char	**numbers;

	i = 0;
	if (check_numbers(ac, av) == 1)
		return (1);
	else
	{
		while (++i < ac)
		{
			j = 0;
			numbers = ft_split(av[i], ' ');
			while (numbers[j])
			{
				ft_lstadd_back(stackA, ft_lstnew(ft_atoi(numbers[j])));
				j++;
			}
			free_numbers(numbers);
		}
	}
	if (check_duplicate(*stackA))
		return (1);
	return (0);
}

void	free_numbers(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		numbers[i] = NULL;
		i++;
	}
	free(numbers);
}
