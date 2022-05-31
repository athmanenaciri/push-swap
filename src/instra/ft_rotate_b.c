#include<stdio.h>
#include"push_swap.h"

void    ft_rotate_b(t_list  **stack_b)
{
    t_list  *node;
    t_list  *current;
    node = NULL;
    current = NULL;

    if(*stack_b == NULL)
        return ;
    if((*stack_b)->next == NULL)
        return ;
    node = *stack_b;
    *stack_b = (*stack_b)->next;
    current = *stack_b;
    current = ft_lstlast(current);
    current->next = node;
    node->next = NULL;
    write(1, "rb\n", 3);
}