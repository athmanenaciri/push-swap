/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:26:40 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/23 20:58:54 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	while (lst)
	{
		ptr = lst;
		lst = lst->next;
	}
	return (ptr);
}