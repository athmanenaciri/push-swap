#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;


void    ft_swap_a(t_list    **stack_a)
{
    t_list  *node;

    node = *stack_a;

    *stack_a = (*stack_a)->next;
    (*stack_a)->next = node;
}