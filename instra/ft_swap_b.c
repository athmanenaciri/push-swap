#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;


void    ft_swap_b(t_list    **stack_b)
{
    int tmp;
    if(*stack_b == NULL)
        return ;
    if((*stack_b)->next == NULL)
        return ;
    tmp = (*stack_b)->data;
    (*stack_b)->data = (*stack_b)->next->data;
    (*stack_b)->next->data = tmp;
 }