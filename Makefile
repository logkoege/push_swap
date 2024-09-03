# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/06 05:53:43 by logkoege          #+#    #+#              #
#    Updated: 2024/09/03 23:38:50 by logkoege         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	push_swap.c \
		push.c		\
		swap.c		\
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
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