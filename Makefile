# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2023/04/30 01:36:47 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
H = libft.h

SRCS = 	char_checking.c char_conversion.c \
	buff_utils.c \
	search_compare_str.c search_compare_mem.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c\
	ft_atoi.c ft_strdup.c ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putnbr_base_fd.c ft_putunbr_base_fd.c ft_puthex_fd.c ft_putptr_fd.c \
	ft_printf.c ft_dprintf.c \
	ft_pow.c ft_itob.c ft_itobarr.c

OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = gcc

all:	${LIB}

%.o:	%.c ${H} Makefile
		${CC} ${CFLAGS} $< -c

${LIB}:	${OBJS}
		ar rcs ${LIB} ${OBJS}

clean:
		$(foreach obj, ${OBJS}, rm -f ${obj})
		find . -name "*.gch" -delete

fclean:	clean
		find . -name "${LIB}" -delete
		find . -name "a.out" -delete

re:	fclean all
		make

.PHONY:	all clean fclean re
