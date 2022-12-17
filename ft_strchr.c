/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:22:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of a character in a string.
 *
 * @param s The string to search.
 * @param c The character to search for.
 *
 * @returns The first occurrence of the character (can be '\0') in the string.
 * NULL if the character was not found.
 */
char	*ft_strchr(const char *s, int c)
{
	size_t		i;
	char		*s2;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == (char)c)
			return (&s2[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return ((void *)0);
}
