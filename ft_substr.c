/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:39:31 by agaley            #+#    #+#             */
/*   Updated: 2022/11/18 01:51:25 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_min(size_t val1, size_t val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	width;

	width = ft_min(ft_strlen(s) - start, len);
	str = malloc(sizeof(char) * (width + 1));
	if (!str)
		return (NULL);
	while (*s != '\0' && start--)
		s++;
	i = len;
	j = 0;
	while (*s != '\0' && i--)
	{
		*(str++) = (char)*(s++);
		j++;
	}
	*str = '\0';
	return (str - j);
}
