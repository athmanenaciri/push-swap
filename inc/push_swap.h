/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:36:20 by anaciri           #+#    #+#             */
/*   Updated: 2022/05/30 23:47:38 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<stdlib.h>
#include <stdio.h>

typedef struct node
{
	int		data;
	int		position;
	struct node	*next;
}t_list;


int		ft_atoi(char *str, int *nbr);
t_list	*ft_lstnew(int	content);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
int		ft_repeat(t_list *head);
void    ft_push_b(t_list **stack_a, t_list **stack_b);
void    ft_push_a(t_list **stack_a, t_list **stack_b);
void    ft_swap_a(t_list    **stack_a);
void    ft_swap_b(t_list    **stack_b);
void    ft_rotate_a(t_list  **stack_a);
void    ft_rotate_b(t_list  **stack_b);
void    ft_r_rotate_a(t_list    **stack_a);
void    ft_r_rotate_b(t_list    **stack_b);
void    ft_rotate_all(t_list    **stack_a, t_list   **stack_b);
void    ft_r_rotate_all(t_list    **stack_a, t_list   **stack_b);
void    ft_swap_all(t_list    **stack_a, t_list   **stack_b);
void	ft_indexing(t_list	*satck_a, t_list	*node);
t_list	*ft_lstlast(t_list *lst);
void    ft_push_twenty(t_list   **stack_a, t_list    **stack_b);
int	ft_lstsize(t_list *lst);
void    ft_push_another(t_list   **stack_a, t_list    **stack_b);

#endif