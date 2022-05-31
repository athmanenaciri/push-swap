#include<stdio.h>
#include"push_swap.h"

void    ft_push_b(t_list **stack_a, t_list **stack_b)
{
	t_list	*current;

	current = NULL;
	if(*stack_a == NULL)
		return ;
	current = *stack_a;
	*stack_a = ((*stack_a)->next);
	current->next = *stack_b;
	*stack_b = current;
	write(1, "pb\n", 3);
}