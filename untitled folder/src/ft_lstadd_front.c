/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:00:56 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/22 18:24:24 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	new->next = *lst;
	*lst = new;
}
