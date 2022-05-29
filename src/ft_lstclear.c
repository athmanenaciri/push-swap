/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 13:39:48 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/23 20:58:58 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*next;
	t_list	*cur;

	cur = *lst;
	while (cur)
	{
		next = cur->next;
		if (del != NULL)
			del(cur->data);
		free(cur);
		cur = next;
	}
}