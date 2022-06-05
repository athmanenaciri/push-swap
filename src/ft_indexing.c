/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 02:19:27 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/04 02:19:28 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_indexing(t_list *stack_a, t_list *node)
{
	node->position = 0;
	if (stack_a == NULL)
		return ;
	while (stack_a)
	{
		if (stack_a->data > node->data)
			stack_a->position += 1;
		else
			node->position += 1;
		stack_a = stack_a->next;
	}
}
