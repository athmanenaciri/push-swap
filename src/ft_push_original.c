/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_original.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:08:14 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/04 02:27:10 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_big(t_list *stack_b, int *ptr)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = stack_b->position;
	while (stack_b)
	{
		if (stack_b->position > index)
		{
			index = stack_b->position;
			i = j;
		}
		stack_b = stack_b->next;
		j++;
	}
	*ptr = index;
	return (i);
}

void	ft_push_original(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	index;

	i = 0;
	while (ft_lstsize(*stack_b))
	{
		i = ft_find_big(*stack_b, &index);
		while ((*stack_b)->position != index)
		{
			if (i < ft_lstsize(*stack_b) / 2)
			{
				ft_rotate_b(stack_b);
			}
			else
				ft_r_rotate_b(stack_b);
		}
		ft_push_a(stack_a, stack_b);
	}
}
