/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 22:47:16 by alex              #+#    #+#             */
/*   Updated: 2022/11/20 04:24:55 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	strlen;
	size_t	i;

	while (s1 && ft_strnstr(s1, set, 1))
	{
		i = 0;
		while (ft_strchr(s1, set[i++]))
			s1++;
	}
	strlen = ft_strlen(s1);
	s1 = s1 + strlen;
	while (ft_strnstr(s1--, set, 1))
		strlen--;
	str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	s1 = s1 - strlen;
	ft_strlcpy(str, s1, strlen);
	str[strlen] = '\0';
	return (str);
}
