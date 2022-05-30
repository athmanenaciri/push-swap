/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_twenty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:48:36 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/31 00:23:03 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include "push_swap.h"

void    ft_push_twenty(t_list   **stack_a, t_list    **stack_b)
{
    int i;
    static int to = 19;
    i = to - 19;
    while(*stack_a && i < to)
    {
        if ((*stack_a)->position <= to)
        {
            if((*stack_a)->position <= to - 10)
                ft_push_b(stack_a, stack_b);
            else if((*stack_a)->position > to - 10)
            {
               ft_push_b(stack_a, stack_b);
               ft_rotate_b(stack_b);       
            }
            i++;
        }
        else
            ft_rotate_a(stack_a);
   }
   to += 20;
}  