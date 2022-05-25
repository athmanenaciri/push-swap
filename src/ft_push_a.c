#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstadd_front(t_list	**lst, t_list	*new);


void    ft_push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*node;

	if((*stack_b) != NULL)
	{
		if((*stack_b)->next != NULL)
			(*stack_b) = (*stack_b)->next;
	}
	node = *stack_b;
	(*stack_b)->next = NULL;
	ft_lstadd_front(stack_a, *stack_b);
}