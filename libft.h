/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:45:12 by agaley            #+#    #+#             */
/*   Updated: 2023/04/15 15:13:57 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

typedef struct s_byte
{
	char	arr[8];
}t_byte;

// CHAR CHECKING

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

// CHAR CONVERSION

int		ft_toupper(int c);
int		ft_tolower(int c);

// BUFF UTILS

void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

// STR UTILS

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *str, char c);

// SEARCH AND COMPARE

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

// TYPE CONVERSION

int		ft_atoi(const char *str);
char	*ft_itoa(int nbr);
t_byte	ft_itob(int nb);
void	ft_itobarr(unsigned int nbr, unsigned int size, char *binstr);

// MEMORY UTILS

void	*ft_calloc(size_t count, size_t size);

// FUNC UTILS

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

// PUT

void	ft_putendl_fd(char *s, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(const char *s, int fd);
int		ft_putnbr_fd(int nb, int fd);
int		ft_putnbr_base_fd(long int nbr, const char *base, int fd);
int		ft_putunbr_base_fd(unsigned long int nbr, const char *base, int fd);
int		ft_puthex_fd(unsigned long int hex, char low, int fd);
int		ft_putptr_fd(void *ptr, int fd);

// PRINT

int		ft_printf(const char *format, ...);
int		ft_dprintf(int fd, const char *format, ...);

// MATH

int		ft_pow(int nb, int power);

#endif
