/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:59:04 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:48:05 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the string needle in the string haystack.
 *
 * @param haystack The string to search in.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 *
 * @returns The first occurrence of the substring needle in the string haystack.
 * A pointer to haystack if needle is empty.
 * NULL if needle is not found or hs is NULL and len 0.
 */
char	*ft_strnstr(const char *hs, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!hs && len == 0)
		return (NULL);
	if (!needle[0])
		return ((char *)hs);
	i = 0;
	while (hs[i])
	{
		j = 0;
		while ((hs[i + j] == needle[j] || needle[j] == '\0') && i + j <= len)
		{
			if (needle[j] == '\0')
				return (&((char *)hs)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
