/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:15:04 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/22 20:31:09 by anaciri          ###   ########.fr       */
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


int main(int ac, char **av)
{
	int i;
	int nbr;
	t_list	*head;
	t_list	*node;

	i = 1;

	if (ac == 1)
	{
		printf("error");
		return(1);
	}

	while(i < ac)
	{
		if(av[i][0] == '\0')
		{
			printf("error");
			return(1);
		}
		i++;
	}

	i = 1;
	while(i < ac)
	{
		if(ft_atoi(av[i], &nbr) == 1)
		{
			printf("error");
			return(1);
		}
		node = ft_lstnew(nbr);
		ft_lstadd_back(&head, node);
		
		// while(head)
		// {
		// 	printf("%d ", head->data);
		// 	head = head->next;
		// }		
		i++;
	}
		if(ft_repeat(head) == 1)
		{
			printf("error");
			return(1);
		}
	return(0);
}
