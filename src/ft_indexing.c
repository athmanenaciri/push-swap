#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
	int	position;
}t_list;

void	ft_indexing(t_list	*stack_a, t_list	*node)
{
	node->position = 0;
	if(stack_a == NULL)
		return ;
	while(stack_a)
	{
		if(stack_a->data > node->data)
			stack_a->position = stack_a->position + 1;
		else if(node->data > stack_a->data)
			node->position = node->position + 1;
		stack_a = stack_a->next;
	}
}
