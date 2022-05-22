/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:56:42 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/22 18:25:09 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct node
{
	int		data;
	struct node	*next;
}t_list;

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
