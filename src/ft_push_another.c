/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_another.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:44:10 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/31 19:53:20 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    ft_push_another(t_list   **stack_a, t_list    **stack_b, int div)
{
    int size;
    int chunk;
    int max;
    
    size = ft_lstsize(*stack_a);
    chunk = size / div;
    max = chunk;
    while(1)
    {
        ft_push_twenty(stack_a, stack_b, max, chunk);
        if(ft_lstsize(*stack_a) == 0)
            break ;
        max += chunk;
    }
}