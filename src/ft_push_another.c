/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_another.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 23:44:10 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/31 00:23:15 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

void    ft_push_another(t_list   **stack_a, t_list    **stack_b)
{
    while(1)
    {
        ft_push_twenty(stack_a, stack_b);
        if(ft_lstsize(*stack_a) == 0)
            break ;
    }
}