# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 17:24:11 by agaley            #+#    #+#              #
#    Updated: 2023/03/22 01:12:58 by agaley           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

LIB = libft.a
H = libft.h

SRCS = 	ft_isdigit.c ft_isprint.c ft_isascii.c ft_isalpha.c ft_isalnum.c \
	ft_toupper.c ft_tolower.c \
	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_strdup.c ft_calloc.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c \
	ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putnbr_base_fd.c ft_putunbr_base_fd.c ft_puthex_fd.c ft_putptr_fd.c \
	ft_printf.c ft_dprintf.c \
	ft_pow.c ft_itob.c

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
