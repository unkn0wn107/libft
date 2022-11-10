# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/11/10 12:05:20 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isalnum.c \
				ft_toupper.c ft_tolower.c \
				ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
				ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
				ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c
OBJS = ${SRCS:.c=.o}
H = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = cc

all:			${NAME}

%.o:			%.c ${H} Makefile
					${CC} ${CFLAGS} $< -c

${NAME}:	${OBJS}
					ar rc ${NAME} ${OBJS}

clean:
					$(foreach obj, ${OBJS}, rm -f ${obj})

fclean:		clean
					find . -name "${NAME}" -delete
					find . -name "a.out" -delete

re:				fclean all
					make

.PHONY:		all clean fclean re
