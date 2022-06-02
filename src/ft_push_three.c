/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 16:21:06 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/02 21:10:57 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	ft_push_three(t_list	**stack_a)
{
	if((*stack_a)->position == 1 && (*stack_a)->next->position == 0)
	{
		ft_swap_a(stack_a);
	}
	else if ((*stack_a)->position == 2 && (*stack_a)->next->position == 0)
	{
		ft_rotate_a(stack_a);
	}
	else if((*stack_a)->position == 1 && (*stack_a)->next->position == 2)
	{
		ft_r_rotate_a(stack_a);
	}
	if (ft_if_sorted(*stack_a) == 1)
		return ;
	ft_swap_a(stack_a);
	ft_push_three(stack_a);
}