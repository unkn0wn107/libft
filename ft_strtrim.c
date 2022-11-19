/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:47:16 by alex              #+#    #+#             */
/*   Updated: 2022/11/19 23:33:14 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	setlen;
	size_t	count;
	size_t	i;

	setlen = ft_strlen(set);
	while (s1 && ft_strnstr(s1, set, setlen))
		s1 = s1 + setlen;
	count = 0;
	i = ft_strlen(s1);
	s1 = s1 + i;
	while (ft_strnstr(s1 - setlen, set, setlen) && count++)
	{
		s1 = s1 - setlen;
		i = i - setlen;
	}
	str = (char *)malloc(sizeof(char) * i);
	if (!str)
		return (NULL);
	s1 = s1 - i;
	ft_strlcat(str, s1, i);
	return (str);
}
