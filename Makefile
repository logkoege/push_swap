# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 19:13:49 by logkoege          #+#    #+#              #
#    Updated: 2024/09/19 19:22:05 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = push_swap.c			\
		push_swap_utils.c	\
		push_swap_utils2.c	\
		list.c				\
		list_utils.c		\
		instructions.c		\
		instructions2.c		\
		instructions3		\
		parsing.c			\
		sort.c				\
		sort_utils.c		\


CC = cc
RM = rm -f
FLAGS = -Wall -Werror -Wextra 
NAME = push_swap
OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
