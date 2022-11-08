# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/11/08 17:38:26 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS = ft_isalpha.c
OBJS = ${SRCS:.c=.o}
H = libft.h
CFLAGS = -Wall -Wextra -Werror

all:		libft.a

%.o:		%.c ${H} Makefile
			$(CC) ${CFLAGS} $< -c

libft.a:	${OBJS}
			ar rc libft.a ${OBJS}

clean:
			$(foreach obj, ${OBJS}, rm -f ${obj})

fclean:		clean
			rm -f libft.a

re:			fclean all

.PHONY:		all clean fclean re
