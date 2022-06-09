# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 21:13:58 by anaciri           #+#    #+#              #
#    Updated: 2022/06/08 05:54:17 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra
DBUILD = build
FILES = main instra/ft_push_a instra/ft_r_rotate_all instra/ft_rotate_all \
	instra/ft_swap_all instra/ft_push_b instra/ft_r_rotate_b instra/ft_rotate_b \
	instra/ft_swap_b instra/ft_r_rotate_a instra/ft_rotate_a instra/ft_swap_a \
	ft_atoi ft_lstadd_front ft_lstlast ft_push_twenty \
	ft_indexing ft_lstnew ft_repeat ft_lstadd_back \
	ft_lstsize ft_push_another ft_push_original ft_if_sorted\
	ft_push_three ft_before_last ft_push_five ft_lstclear\

FILES_BONUS = checker/main checker/exec checker/get_next_line_utils checker/get_next_line \
	instra_bonus/ft_push_a instra_bonus/ft_r_rotate_all instra_bonus/ft_rotate_all instra_bonus/ft_swap_all \
	instra_bonus/ft_push_b instra_bonus/ft_r_rotate_b instra_bonus/ft_rotate_b instra_bonus/ft_swap_b \
	instra_bonus/ft_r_rotate_a instra_bonus/ft_rotate_a instra_bonus/ft_swap_a ft_atoi \
	ft_lstadd_front ft_lstlast ft_indexing ft_lstnew \
	ft_repeat ft_lstadd_back ft_lstsize  ft_if_sorted\
	instra_bonus/ft_if_sorted_bonus ft_push_three ft_before_last ft_lstclear\
	
OBJS = $(addprefix $(DBUILD)/, $(FILES:=.o))

OBJS_BONUS = $(addprefix $(DBUILD)/, $(FILES_BONUS:=.o))

NAME = push_swap

NAME_BONUS = checker

all: $(NAME)

bonus : $(NAME_BONUS)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

$(NAME_BONUS) :$(OBJS_BONUS)
	$(CC) $^ -o $@

$(DBUILD)/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -I ./inc

clean:
	rm -rf $(OBJ) $(DBUILD)
fclean: clean
	rm -f $(NAME) $(NAME_BONUS)

re: fclean all
