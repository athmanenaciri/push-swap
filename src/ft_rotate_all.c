#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void    ft_rotate_a(t_list  **stack_a);
void    ft_rotate_b(t_list  **stack_b);

void    ft_rotate_all(t_list    **stack_a, t_list   **stack_b)
{
    ft_rotate_a(stack_a);
    ft_rotate_b(stack_b);
}