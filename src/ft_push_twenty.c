/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_twenty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:48:36 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/30 16:48:37 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
#include "push_swap.h"

void    ft_push_twenty(t_list   *stack_a, t_list    *stack_b)
{
    t_list  *current;
    if(stack_a == NULL)
        return ;
        current = stack_a;
    while(current)
    {
        if(current->position <= 20)
            ft_push_b(&current, &stack_b);
        current = current->next;
    }
}  