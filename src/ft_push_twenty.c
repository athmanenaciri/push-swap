#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
	int	position;
}t_list;

int     ft_lstsize(t_list *lst);
void    ft_push_b(t_list **stack_a, t_list **stack_b);

void    ft_push_twenty(t_list   *stack_a, t_list    *stack_b)
{
    t_list  *current;
    if(stack_a == NULL)
        return ;
        current = stack_a;
    while(current)
    {
        if(current->position <= 20)
            ft_push_b(&current, &stack_b);
        current = current->next;
    }
}  