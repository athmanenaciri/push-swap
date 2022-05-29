# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anaciri <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 21:13:58 by anaciri           #+#    #+#              #
#    Updated: 2022/05/29 21:37:23 by anaciri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra

OBJ = src/main.o instra/ft_push_a.o instra/ft_r_rotate_all.o instra/ft_rotate_all.o \
instra/ft_swap_all.o instra/ft_push_b.o instra/ft_r_rotate_b.o instra/ft_rotate_b.o \
instra/ft_swap_b.o instra/ft_r_rotate_a.o instra/ft_rotate_a.o instra/ft_swap_a.o \
src/ft_atoi.o src/ft_lstadd_front.o src/ft_lstlast.o src/ft_push_twenty.o \
src/ft_indexing.o src/ft_lstnew.o src/ft_repeat.o \
src/ft_lstadd_back.o src/ft_lstsize.o \

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all
