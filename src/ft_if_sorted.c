/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_if_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:15:03 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/02 21:16:46 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_if_sorted(t_list	*stack_a)
{
	t_list	*current;
	int i;

	i = 0;
	if(stack_a == NULL)
		return (0);
	current = stack_a;
	while(current != NULL)
	{
		if(current->position != i)
			return 0;
		i++;
		current = current->next;
	}
	return(1);
}