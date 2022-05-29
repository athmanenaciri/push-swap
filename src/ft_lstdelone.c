/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 02:14:21 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/23 20:58:56 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (del != NULL)
		del(lst->data);
	free(lst);
}