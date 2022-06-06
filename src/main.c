/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 02:17:53 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	if (ft_if_sorted(*stack_a) == 1)
		return (1);
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

void	ft_norm4(int size, t_list **stack_a, t_list **stack_b)
{
	if (size < 6)
		ft_push_five(stack_a, stack_b);
	else if (size < 200)
		ft_push_another(stack_a, stack_b, 5);
	else
		ft_push_another(stack_a, stack_b, 10);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		nbr;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if(ft_norm1(&ac, av) || ft_norm2(&ac, av, &nbr, &stack_a) || ft_norm3(&stack_a))
	{
		ft_lstclear(&stack_a, NULL);
		ft_lstclear(&stack_b, NULL);
		return (1);
	}
	// i = ft_norm1(&ac, av);
	// if (i == 1)
	// 	return (1);
	// i = ft_norm2(&ac, av, &nbr, &stack_a);
	// if (i == 1)
	// 	return (1);
	// i = ft_norm3(&stack_a);
	// if (i == 1)
	// 	return (1);
	i = ft_lstsize(stack_a);
	ft_norm4(i, &stack_a, &stack_b);
	ft_push_original(&stack_a, &stack_b);
}

	// t_list	*current;
	// current = stack_a;
	// i = 1;
	// while (i < ac)
	// {
	// 	while (current)
	// 	{
	// 		printf("%d\n", current->data);
	// 		current = current->next;
	// 	}	
	// 	i++;
	// }