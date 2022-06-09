/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/09 03:07:36 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_norm1(int *ac, char **av)
{
	int	i;

	i = 1;
	while (i < *ac)
	{
		if (av[i][0] == '\0')
		{
			write (1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_norm3(t_list **stack_a)
{
	if (ft_repeat(*stack_a) == 1)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	return (0);
}

int	ft_norm2(int *ac, char **av, int *nbr, t_list **stack_a)
{
	int		i;
	t_list	*node;

	i = 1;
	while (i < *ac)
	{
		if (ft_atoi(av[i], nbr) == 1)
		{
			write (1, "Error\n", 6);
			return (1);
		}
		node = ft_lstnew(*nbr);
		ft_indexing(*stack_a, node);
		ft_lstadd_back(stack_a, node);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	if (str1 == NULL)
		return (1);
	while (str1[i])
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		nbr;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	if (ft_norm1(&ac, av)
		|| ft_norm2(&ac, av, &nbr, &stack_a) || ft_norm3(&stack_a))
		return (ft_lstclear(&stack_a), 1);
	if (execute(&stack_a, &stack_b) == 1)
	{
		ft_lstclear(&stack_a);
		ft_lstclear(&stack_b);
		return (1);
	}
	if (ft_if_sorted_bonus(stack_a, stack_b) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
