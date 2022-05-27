/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:35:20 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/26 14:34:05 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*ptr;

	ptr = *lst;
	if (*lst == NULL)
		*lst = new;
	else
	{
		if(ptr == NULL)
			return ;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}