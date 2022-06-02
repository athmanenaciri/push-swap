#include<stdio.h>
#include"push_swap.h"

void    ft_r_rotate_b(t_list    **stack_b)
{
    t_list  *node;
    t_list  *current;

    node = NULL;
    current = NULL;
    if(*stack_b == NULL)
        return ;
    if((*stack_b)->next == NULL)
        return ;
    node = ft_before_last(*stack_b);
    node->next->next = *stack_b;
	*stack_b = node->next;
	node->next = NULL;
    write(1, "rrb\n", 4);
}