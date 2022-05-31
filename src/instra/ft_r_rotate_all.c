#include<stdio.h>
#include"push_swap.h"

void    ft_r_rotate_all(t_list    **stack_a, t_list   **stack_b)
{
    ft_r_rotate_a(stack_a);
    ft_r_rotate_b(stack_b);
    write(1, "rrr\n", 4);
}