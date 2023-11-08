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
CCFLAGS = -Wall -Werror -Wextra
INCLUDE = libft.h
LIBC = ar -rcs
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memset.c ft_strlen.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJS= ${SRCS:.c=.o}
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
			ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
			ft_lstmap.c
BONUS_OBJS = ${BONUS_SRCS:.c=.o}

.PHONY: all bonus clean fclean re rebonus

all: ${NAME}

bonus: ${NAME} ${BONUS_OBJS}
	${LIBC} ${NAME} ${BONUS_OBJS}

$(NAME): ${OBJS} 
	${LIBC} ${NAME} ${OBJS} 

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f ${OBJS} ${BONUS_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

rebonus: fclean bonus

