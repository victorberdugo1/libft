# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/15 13:10:35 by vberdugo          #+#    #+#              #
#    Updated: 2024/06/26 13:39:28 by vberdugo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_substr.c ft_strjoin.c
# Parte 2 - Funciones adicionales ft_substr.c

OBJS = ${SRC:%.c=%.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $@ $^
	ranlib $@

%.o::%.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS}
	
fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
