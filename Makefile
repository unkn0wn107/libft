# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2022/11/08 02:38:02 by alex             ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAMES = ft_isalpha
OBJS = ${.c=.o}
H = includes/ft.h
CFLAGS = -Wall -Wextra -Werror

all:		libft.a

libft.a:
			gcc ${CFLAGS} -I ${H} c $< -o ${<:.c=.o}
			ar rc ../libft.a $(OBJS)

clean:
			$(foreach obj, $(OBJS), rm -f $(obj);)

fclean:		clean
			rm -f libft.a

re:			fclean all

.PHONY:		all clean fclean re
