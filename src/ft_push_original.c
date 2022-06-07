/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_original.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:08:14 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/07 04:06:08 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_find_big(t_list *stack_b, int *ptr, int pos)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = stack_b->position;
	while (stack_b)
	{
		if (stack_b->position > index && stack_b->position != pos)
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

void	push_to(t_list **stack_b, int pos, int i)
{
	while ((*stack_b)->position != pos)
	{
		if (i < ft_lstsize(*stack_b) / 2)
		{
			ft_rotate_b(stack_b);
		}
		else
			ft_r_rotate_b(stack_b);
	}
	
}
void	ft_tmp(int *i, int *j, int *index1, int *index2)
{
	int tmp;

	tmp = *i;
	*i = *j;
	*j = tmp;
	tmp = *index1;
	*index1 = *index2;
	*index2 = tmp;
}
void	ft_push_original(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	j;
	int	index1;
	int	index2;

	i = 0;
	while (ft_lstsize(*stack_b))
	{
		i = ft_find_big(*stack_b, &index1, -1);
		j = ft_find_big(*stack_b, &index2, index1);
		if(i < (ft_lstsize(stack_b) / 2) && j < (ft_lstsize(stack_b) / 2))
		{
			if	(j < i)
				ft_tmp(&i, &j, &index1, &index2);
		}
		else if(i > (ft_lstsize(stack_b) / 2) && j > (ft_lstsize(stack_b) / 2))
		{
			if	(j > i)
				ft_tmp(&i, &j, &index1, &index2);
		}
		push_to(stack_b, index1, i);
		push_to(stack_b, index2, j);
		ft_push_a(stack_a, stack_b);
	}
}