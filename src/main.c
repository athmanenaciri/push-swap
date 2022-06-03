/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/03 17:34:45 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	int i;
	int nbr;
	int size;
	t_list	*stack_a;
	t_list	*node;
	t_list	*current;
	t_list	*stack_b;

	i = 1;


	if (ac == 1)
	{
		printf("Error");
		return(1);
	}

	while(i < ac)
	{
		if(av[i][0] == '\0')
		{
			printf("Error");
			return(1);
		}
		i++;
	}

	i = 1;
	stack_a = NULL;
	stack_b = NULL;
	current =  stack_a;
	while(i < ac)
	{
		if(ft_atoi(av[i], &nbr) == 1)
		{
			printf("Error");
			return(1);
		}
		node = ft_lstnew(nbr);
		ft_indexing(stack_a, node);
		ft_lstadd_back(&stack_a, node);
		i++;
	}
	if(ft_repeat(stack_a) == 1)
	{
		printf("Error");
		return(1);	
	}
	if(ft_if_sorted(stack_a) == 1)
	{
		printf("Sorted");
		return(1);	
	}
	
	// ft_push_b(&stack_a, &stack_b);
	// ft_push_a(&stack_a, &stack_b);
	//ft_swap_a(&stack_a);
	//ft_swap_b(&stack_b);
	//ft_rotate_a(&stack_a);
	//ft_rotate_b(&stack_b);
	//ft_r_rotate_a(&stack_a);
	//ft_r_rotate_b(&stack_b);
	//ft_rotate_all(&stack_a, &stack_b);
	//ft_r_rotate_all(&stack_a, &stack_b);
	//ft_swap_all(&stack_a, &stack_b);
	//ft_push_twenty(&stack_a, &stack_b);
	
	size = ft_lstsize(stack_a);
	//if (size == 3)
		//ft_push_three(&stack_a);
	if (size < 6)
		ft_push_five(&stack_a, &stack_b);
	else if (size < 200)
		ft_push_another(&stack_a, &stack_b, 5);
	else
		ft_push_another(&stack_a, &stack_b, 10);
	ft_push_original(&stack_a, &stack_b);
	
	
	//ft_if_sorted(stack_a);

	
	current = stack_b;
	 i = 1;
	 while(i < ac)
	{
		while(current)
		{
			printf("%d\n", current->data);
			current = current->next; 
		}	
		i++;
	}

	
	current = stack_a;
	 i = 1;
	 while(i < ac)
	{
		while(current)
		{
			printf("%d\n", current->data);
			current = current->next; 
		}	
		i++;
	}
	
	// if (stack_a)
	// 	printf("%d ", stack_a->data);
		
	return(0);
}