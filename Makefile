# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <anaciri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 21:13:58 by anaciri           #+#    #+#              #
#    Updated: 2022/06/02 22:42:03 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -g
DBUILD = build
FILES = main instra/ft_push_a instra/ft_r_rotate_all instra/ft_rotate_all \
	instra/ft_swap_all instra/ft_push_b instra/ft_r_rotate_b instra/ft_rotate_b \
	instra/ft_swap_b instra/ft_r_rotate_a instra/ft_rotate_a instra/ft_swap_a \
	ft_atoi ft_lstadd_front ft_lstlast ft_push_twenty \
	ft_indexing ft_lstnew ft_repeat ft_lstadd_back \
	ft_lstsize ft_push_another ft_push_original ft_if_sorted\
	ft_push_three ft_before_last ft_push_five \

OBJS = $(addprefix $(DBUILD)/, $(FILES:=.o))

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $^ -o $@

$(DBUILD)/%.o: src/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@ -I ./inc

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
