/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:15:03 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 16:38:20 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_if_sorted(t_list	*stack_a)
{
	t_list	*current;
	int i;
	int last;

	i = 0;
	last = stack_a->position;
	if(stack_a == NULL)
		return (0);
	current = stack_a;
	while(current != NULL)
	{
		if(last > current->position)
			return 0;
		last = current->position;
		i++;
		current = current->next;
	}
	return(1);
}