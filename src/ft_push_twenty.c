/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_twenty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:48:36 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/31 19:45:16 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include "push_swap.h"

void    ft_push_twenty(t_list **stack_a, t_list **stack_b, int max, int chunk)
{
    int i;
    int half;

    half = chunk / 2;
    i = 0;
    while(*stack_a && i < chunk)
    {
        if ((*stack_a)->position <= max)
        {
            if((*stack_a)->position <= max - half)
                ft_push_b(stack_a, stack_b);
            else
            {
               ft_push_b(stack_a, stack_b);
               ft_rotate_b(stack_b);       
            }
            i++;
        }
        else
            ft_rotate_a(stack_a);
   }
}  