/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 04:05:23 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

int	ft_norm1(int *ac, char **av)
{
	int	i;

	i = 1;
	if (*ac == 1)
	{
		write (1, "Error", 5);
		return (1);
	}
	while (i < *ac)
	{
		if (av[i][0] == '\0')
		{
			write (1, "Error", 5);
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
		write (1, "Error", 5);
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
			write (1, "Error", 5);
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
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = ft_norm1(&ac, av);
	if (i == 1)
		return (1);
	i = ft_norm2(&ac, av, &nbr, &stack_a);
	if (i == 1)
		return (1);
	i = ft_norm3(&stack_a);
	if (i == 1)
		return (1);
	execute(&stack_a, &stack_b);
	if (ft_if_sorted_bonus(stack_a, stack_b) == 1)
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
}
