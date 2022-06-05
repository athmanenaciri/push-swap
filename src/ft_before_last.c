/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_before_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:17:21 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/04 02:17:28 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

t_list	*ft_before_last(t_list *stack)
{
	t_list	*prev;

	if (stack == NULL)
		return (stack);
	prev = stack;
	while (stack->next)
	{
		prev = stack;
		stack = stack->next;
	}
	return (prev);
}
