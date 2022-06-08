/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_original.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:08:14 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/08 05:25:31 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_by_pos(t_list *stack_b, int pos)
{
	int	i;

	i = 0;
	while (stack_b)
	{
		if (stack_b->position == pos)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (-1);
}

int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

int	ft_dis(t_list *stack, int pos)
{
	int	i;

	i = ft_min(pos, (ft_lstsize(stack) - pos));
	return (i);
}

void	push_to(t_list **stack_b, int pos, int i)
{
	if (i < ft_lstsize(*stack_b) / 2)
		while ((*stack_b)->position != pos)
			ft_rotate_b(stack_b);
	else
		while ((*stack_b)->position != pos)
			ft_r_rotate_b(stack_b);
}

void	ft_push_original(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	pos;

	pos = ft_lstsize(*stack_b);
	while (pos > 0)
	{
		pos--;
		i = find_by_pos(*stack_b, pos);
		j = find_by_pos(*stack_b, pos - 1);
		if (pos == 0 || ft_dis(*stack_b, i) < ft_dis(*stack_b, j))
		{
			push_to(stack_b, pos, i);
			ft_push_a(stack_a, stack_b);
		}
		else
		{
			push_to(stack_b, pos - 1, j);
			ft_push_a(stack_a, stack_b);
			i = find_by_pos(*stack_b, pos);
			push_to(stack_b, pos, i);
			pos--;
			ft_push_a(stack_a, stack_b);
			ft_swap_a(stack_a);
		}
	}
}
