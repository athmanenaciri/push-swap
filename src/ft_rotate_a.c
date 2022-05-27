#include<stdio.h>


typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

t_list	*ft_lstlast(t_list *lst);

void    ft_rotate_a(t_list  **stack_a)
{
    t_list  *node;
    t_list  *current;
    node = NULL;
    current = NULL;

    if(*stack_a == NULL)
        return ;
    if((*stack_a)->next == NULL)
        return ;
    node = *stack_a;
    *stack_a = (*stack_a)->next;
    current = *stack_a;
    current = ft_lstlast(current);
    current->next = node;
    node->next = NULL;
}