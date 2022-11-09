# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/11/09 12:45:35 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isalnum.c
OBJS = ${SRCS:.c=.o}
H = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = cc

all:			libft.a

%.o:			%.c ${H} Makefile
					$(CC) ${CFLAGS} $< -c

libft.a:	${OBJS}
					ar rc libft.a ${OBJS}

clean:
					$(foreach obj, ${OBJS}, rm -f ${obj})

fclean:		clean
					find . -name "libft.a" -delete
					find . -name "a.out" -delete

re:				fclean all

.PHONY:		all clean fclean re
