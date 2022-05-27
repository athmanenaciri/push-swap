#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

t_list	*ft_lstlast(t_list *lst);

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
    node = ft_lstlast(*stack_b);
    node->next = *stack_b;
    (*stack_b)->next = NULL;
    *stack_b = node;
    current = ft_lstlast(*stack_b);
    current->next = NULL;
}