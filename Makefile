# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vberdugo <vberdugo@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/15 13:10:35 by vberdugo          #+#    #+#              #
#    Updated: 2024/06/30 17:53:15 by victor           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# Parte 2 - Funciones adicionales desde ft_substr.c
SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memchr.c \
	ft_memcmp.c ft_memcpy.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
	ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c  ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRC = ft_lstnew.c

OBJS = ${SRC:%.c=%.o}

BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

AR = ar rcs

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

all: ${NAME}

${NAME}: ${OBJS}
	${AR} $@ $^
	ranlib $@

%.o:%.c libft.h
	${CC} ${CFLAGS} -c $< -o $@

clean:
	rm -f ${OBJS} $(BONUS_OBJ)
	
fclean: clean
	rm -f ${NAME}

re: fclean all

bonus: ${OBJ} ${BONUS_OBJ}
	${AR} ${NAME} ${OBJ} ${BONUS_OBJ}

.PHONY: all clean fclean re
