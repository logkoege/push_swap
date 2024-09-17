# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 05:53:43 by logkoege          #+#    #+#              #
#    Updated: 2024/09/17 15:19:59 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	push_swap.c 	\
		push.c			\
		swap.c			\
		ps_utils.c		\
		parsing.c		\
		r_fonctions.c	\

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap.a
OBJS = $(SRCS:.c=.o)
OBJSB = $(SRCSB:.c=.o)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re