/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:09:15 by agaley            #+#    #+#             */
/*   Updated: 2023/06/28 10:26:19 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a string.
 *
 * @param s The string whose length is to be computed.
 *
 * @returns The length of the string.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	else
	{
		i = 0;
		while (s[i])
			i++;
	}
	return (i);
}

/**
 * Calculates the length of a string.
 *
 * @param s The string whose length is to be computed.
 *
 * @returns The length of the string.
 */
size_t	ft_ustrlen(const unsigned char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * Copies a string into a destination. NUL-terminate the result.
 * The NULL-byte should be included in size.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination string.
 *
 * @returns The length of src string.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size > 0 && i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

/**
 * Concatenates two NUL-terminated strings. NUL-terminate the result.
 * The NULL-byte should be included in size.
 *
 * @param dst The destination string.
 * @param src The source string.
 * @param size The size of the destination string.
 *
 * @returns The length of the string it tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	len;

	if (!dst && size == 0)
		return (ft_strlen(src));
	else
	{
		dstlen = ft_strlen(dst);
		len = dstlen + ft_strlen(src);
		if (size < dstlen || size == 0)
			return (size + ft_strlen(src));
		i = dstlen;
		j = 0;
		while (i < size - 1 && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
		return (len);
	}
}
