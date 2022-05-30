#include<stdio.h>
#include"push_swap.h"

void    ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	node = NULL;
	if(*stack_b == NULL)
		return ;
	if((*stack_b)->next != NULL)
		node = (*stack_b)->next;
	(*stack_b)->next = *stack_a;
	*stack_a = *stack_b;
	*stack_b = node;

	// if((*stack_b) != NULL)
	// {
	// 	if((*stack_b)->next != NULL)
	// 		(*stack_b) = (*stack_b)->next;
	// }
	//node = *stack_b;
	//(*stack_b)->next = NULL;
	//ft_lstadd_front(stack_a, *stack_b);
}