# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:23:27 by fizad             #+#    #+#              #
#    Updated: 2023/10/16 14:23:34 by fizad            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBC = ar -rcs
RM = rm -f
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: main.c $(SRCS) 
	gcc $(CFLAGS) $(SRCS) -o $@

all: ${NAME}

$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re all