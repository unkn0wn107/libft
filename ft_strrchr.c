/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/12/04 23:19:48 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t i;
	char *s2;

	s2 = (char *)s;
	i = ft_strlen(s2) - 1;
	if ((char)c == '\0')
		return ((char *)s + i + 1);
	while (i >= 0)
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i--;
	}
	return ((void *)0);
}
