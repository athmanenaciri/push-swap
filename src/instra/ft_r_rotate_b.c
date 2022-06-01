#include<stdio.h>
#include"push_swap.h"

t_list	*ft_before_last(t_list	*stack_b)
{
	t_list	*prev;

	if (stack_b == NULL)
		return (stack_b);
	prev = stack_b;
	while(stack_b->next)
	{
		prev = stack_b;
		stack_b = stack_b->next;
	}
	return (prev);
}

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