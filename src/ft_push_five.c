/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:47:07 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/02 22:44:41 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_small(t_list *stack_a)
{
	int	i, j;
	int	index;

	i = 0;
	j = 0;
	index = stack_a->position;
	while (stack_a)
	{
		if (stack_a->position < index)
		{
			index = stack_a->position;
			i = j;
		}
		stack_a = stack_a->next;
		j++;
	}
	return (i);
}

void	ft_push_five(t_list	**stack_a, t_list	**stack_b)
{
	int i;
	if(*stack_a == NULL)
		return ;
	i = ft_find_small(*stack_a);
	while(*stack_a)
	{
		if((*stack_a)->position == i || (*stack_a)->position == i + 1)
			ft_push_b(stack_a, stack_b);
		*stack_a = (*stack_a)->next;
	}
}