#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstadd_front(t_list	**lst, t_list	*new);


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


	//current = *stack_a;
	//(*stack_a) = (*stack_a)->next;
	//current->next = NULL;
//ft_lstadd_front(stack_b, *stack_a);
	//printf("(%d)", (*stack_b)->data);
	
}