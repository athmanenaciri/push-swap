/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/05 22:31:45 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_norm1(int *ac, char **av)
{
	int	i;

	i = 1;
	if (*ac == 1)
	{
		write (1, "Error", 5);
		return (1);
	}
	while (i < *ac)
	{
		if (av[i][0] == '\0')
		{
			write (1, "Error", 5);
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_norm3(t_list **stack_a)
{
	if (ft_repeat(*stack_a) == 1)
	{
		write (1, "Error", 5);
		return (1);
	}
	if (ft_if_sorted(*stack_a) == 1)
		return (1);
	return (0);
}

int	ft_norm2(int *ac, char **av, int *nbr, t_list **stack_a)
{
	int		i;
	t_list	*node;

	i = 1;
	while (i < *ac)
	{
		if (ft_atoi(av[i], nbr) == 1)
		{
			write (1, "Error", 5);
			return (1);
		}
		node = ft_lstnew(*nbr);
		ft_indexing(*stack_a, node);
		ft_lstadd_back(stack_a, node);
		i++;
	}
	return (0);
}

int	ft_strcmp(char *str1, char *str2)
{
	int i;
	
	i = 0;
	if(str1 == NULL)
		return (1);
	while(str1)
	{
		if(str1[i] == str2[i])
			i++;
		else
			return (1);
	}
	return (0);
}
void	false(void)
{
	write(1, "Error", 5);
}
void	instra(char *inp, t_list **stack_a, t_list **stack_b)
{
	if(strcmp(inp, "rr"))
		return(ft_rotate_all(stack_a, stack_b));
	else if(strcmp(inp, "rrr"))
		return(ft_r_rotate_all(stack_a, stack_b));
	else if(strcmp(inp, "ss"))
		return(ft_swap_all(stack_a, stack_b));
	else if(strcmp(inp, "pa"))
		return(ft_push_a(stack_a, stack_b));
	else if(strcmp(inp, "pb"))
		return(ft_push_b(stack_a, stack_b));
	else if(strcmp(inp, "ra"))
		return(ft_rotate_a(stack_a));
	else if(strcmp(inp, "rra"))
		return(ft_r_rotate_a(stack_a));
	else if(strcmp(inp, "rb"))
		return(ft_rotate_b(stack_b));
	else if(strcmp(inp, "rrb"))
		return(ft_r_rotate_b(stack_b));
	else if(strcmp(inp, "sa"))
		return(ft_swap_a(stack_a));
	else if(strcmp(inp, "sb"))
		return(ft_swap_b(stack_b));
	else
		return(false());
}
void	execute(t_list **stack_a, t_list **stack_b)
{
	char	*inp;
	int i;
	
	i = 0;
	while (1)
	{
		inp = get_next_line(0);
		if(inp == NULL)
			break ;
		instra(inp, *stack_a, *stack_b);
	}
}
int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;
	int		nbr;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	i = ft_norm1(&ac, av);
	if (i == 1)
		return (1);
	i = ft_norm2(&ac, av, &nbr, &stack_a);
	if (i == 1)
		return (1);
	i = ft_norm3(&stack_a);
	if (i == 1)
		return (1);
	execute(&stack_a, &stack_b);
}