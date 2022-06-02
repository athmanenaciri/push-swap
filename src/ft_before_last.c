#include"push_swap.h"

t_list	*ft_before_last(t_list	*stack)
{
	t_list	*prev;

	if (stack == NULL)
		return (stack);
	prev = stack;
	while(stack->next)
	{
		prev = stack;
		stack = stack->next;
	}
	return (prev);
}