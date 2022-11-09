# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/11/09 18:00:38 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = $(shell find . -type f -name "*.c")
# TODO : change to static declaration when all functions are available
# SRCS = 	ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isalnum.c \
# 				ft_toupper.c ft_tolower.c \
# 				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
# 				ft_strlen.c ft_strlcpy.c ft_strlcat.c
OBJS = ${SRCS:.c=.o}
H = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = cc

all:			${NAME}

%.o:			%.c ${H} Makefile
					${CC} ${CFLAGS} $< -c

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}

so:
					${CC} -nostartfiles -fPIC ${CFLAGS} ${SRCS}
					gcc -nostartfiles -shared -o libft.so ${OBJS}

clean:
					$(foreach obj, ${OBJS}, rm -f ${obj})
					find . -name "libft.so" -delete

fclean:		clean
					find . -name "${NAME}" -delete
					find . -name "a.out" -delete

re:				fclean all

.PHONY:		all clean fclean re
