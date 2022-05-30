/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 00:26:40 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/30 16:57:00 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

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