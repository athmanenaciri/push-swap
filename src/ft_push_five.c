/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:47:07 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 17:34:11 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_small(t_list *stack_a, int *ptr)
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
	*ptr = index;
	return (i);
}

void	ft_push_five(t_list	**stack_a, t_list	**stack_b)
{
	int i;
	int index;
	int	size;

	size = ft_lstsize(*stack_a);
	while(ft_lstsize(*stack_a) > 3)
	{
	    i = ft_find_small(*stack_a, &index);
		while ((*stack_a)->position != index)
		{
			if (i < 2)
				ft_rotate_a(stack_a);
			else
				ft_r_rotate_a(stack_a);
		}
		ft_push_b(stack_a, stack_b);
	}
	if(size == 2)
		ft_swap_a(stack_a);
	else if (ft_if_sorted(*stack_a) == 0)
		ft_push_three(stack_a, size - 3);
}