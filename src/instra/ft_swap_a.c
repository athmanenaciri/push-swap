#include<stdio.h>
#include"push_swap.h"

void    ft_swap_a(t_list    **stack_a)
{
    int tmp;
    if(*stack_a == NULL)
        return ;
    if((*stack_a)->next == NULL)
        return ;
    tmp = (*stack_a)->data;
    (*stack_a)->data = (*stack_a)->next->data;
    (*stack_a)->next->data = tmp;
}