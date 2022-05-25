/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/25 21:01:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;


int ft_atoi(char *str, int *nbr);
t_list	*ft_lstnew(int	content);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
int    ft_repeat(t_list *head);
void    ft_push_b(t_list **stack_a, t_list **stack_b);
void    ft_push_a(t_list **stack_a, t_list **stack_b);
void    ft_swap_a(t_list    **stack_a);



int main(int ac, char **av)
{
	int i;
	int nbr;
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
	current = stack_a;
	while(i < ac)
	{
		if(ft_atoi(av[i], &nbr) == 1)
		{
			printf("Error");
			return(1);
		}
		node = ft_lstnew(nbr);
		ft_lstadd_back(&stack_a, node);
		
		 while(current)
		{
			printf("%d ", current->data);
			current = current->next;
		}		
		i++;
	}
	if(ft_repeat(stack_a) == 1)
	{
		printf("Error");
		return(1);
	}
	i = 1;
	current = stack_a;
	//ft_push_b(&stack_a, &stack_b);
	ft_push_a(&stack_a, &stack_b);
	//ft_swap_a(&stack_a);
	//while(i < ac)
	//{
		//while(current)
	//	{
	//		printf("%d ", current->data);
	//		current = current->next;
	//	}	
	//	i++;
	//}
	if (stack_a)
		printf("%d ", stack_a->data);
		
	return(0);
}