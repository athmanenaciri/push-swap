/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 16:36:20 by anaciri           #+#    #+#             */
/*   Updated: 2022/06/06 04:04:51 by anaciri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct node
{
	int			data;
	int			position;
	struct node	*next;
}t_list;

int		ft_atoi(char *str, int *nbr);
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list	**lst, t_list	*new);
void	ft_lstadd_front(t_list	**lst, t_list	*new);
int		ft_repeat(t_list *head);
void	ft_push_b(t_list **stack_a, t_list **stack_b);
void	ft_push_a(t_list **stack_a, t_list **stack_b);
void	ft_swap_a(t_list **stack_a);
void	ft_swap_b(t_list **stack_b);
void	ft_rotate_a(t_list **stack_a);
void	ft_rotate_b(t_list **stack_b);
void	ft_r_rotate_a(t_list **stack_a);
void	ft_r_rotate_b(t_list **stack_b);
void	ft_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_r_rotate_all(t_list **stack_a, t_list **stack_b);
void	ft_swap_all(t_list **stack_a, t_list **stack_b);
void	ft_indexing(t_list *satck_a, t_list *node);
void	ft_lstclear(t_list **lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_push_twenty(t_list **stack_a, t_list **stack_b, int max, int chunk);
int		ft_lstsize(t_list *lst);
void	ft_push_another(t_list **stack_a, t_list **stack_b, int div);
void	ft_push_original(t_list	**stack_a, t_list **stack_b);
int		ft_strcmp(char *str1, char *str2);
int		ft_if_sorted(t_list *stack_a);
int		ft_if_sorted_bonus(t_list *stack_a, t_list *stack_b);
void	ft_push_three(t_list **stack_a, int start);
t_list	*ft_before_last(t_list *stack);
void	ft_push_five(t_list **stack_a, t_list **stack_b);
int		execute(t_list **stack_a, t_list **stack_b);

#endif