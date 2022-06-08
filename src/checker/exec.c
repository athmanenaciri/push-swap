/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:01:35 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/08 06:04:58 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	instra(char *inp, t_list **stack_a, t_list **stack_b)
{
	if (ft_strcmp(inp, "rr\n") == 0)
		return (ft_rotate_all(stack_a, stack_b), 1);
	else if (ft_strcmp(inp, "rrr\n") == 0)
		return (ft_r_rotate_all(stack_a, stack_b), 1);
	else if (ft_strcmp(inp, "ss\n") == 0)
		return (ft_swap_all(stack_a, stack_b), 1);
	else if (ft_strcmp(inp, "pa\n") == 0)
		return (ft_push_a(stack_a, stack_b), 1);
	else if (ft_strcmp(inp, "pb\n") == 0)
		return (ft_push_b(stack_a, stack_b), 1);
	else if (ft_strcmp(inp, "ra\n") == 0)
		return (ft_rotate_a(stack_a), 1);
	else if (ft_strcmp(inp, "rra\n") == 0)
		return (ft_r_rotate_a(stack_a), 1);
	else if (ft_strcmp(inp, "rb\n") == 0)
		return (ft_rotate_b(stack_b), 1);
	else if (ft_strcmp(inp, "rrb\n") == 0)
		return (ft_r_rotate_b(stack_b), 1);
	else if (ft_strcmp(inp, "sa\n") == 0)
		return (ft_swap_a(stack_a), 1);
	else if (ft_strcmp(inp, "sb\n") == 0)
		return (ft_swap_b(stack_b), 1);
	else
		return (write(2, "Error\n", 6), 0);
}

int	execute(t_list **stack_a, t_list **stack_b)
{
	char	*inp;

	while (1)
	{
		inp = get_next_line(0);
		if (inp == NULL)
			break ;
		if (instra(inp, stack_a, stack_b) == 0)
			return (free(inp), 1);
		free(inp);
	}
	return (0);
}
