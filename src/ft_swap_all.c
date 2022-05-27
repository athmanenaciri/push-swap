#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void    ft_swap_a(t_list  **stack_a);
void    ft_swap_b(t_list  **stack_b);

void    ft_swap_all(t_list    **stack_a, t_list   **stack_b)
{
    ft_swap_a(stack_a);
    ft_swap_b(stack_b);
}