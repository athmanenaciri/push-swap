#include<stdio.h>
#include"push_swap.h"

void    ft_rotate_all(t_list    **stack_a, t_list   **stack_b)
{
    ft_rotate_a(stack_a);
    ft_rotate_b(stack_b);
    write(1, "rr\n", 3);
}