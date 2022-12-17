/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:30:27 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:48:34 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of a byte within n bytes of a memory area.
 *
 * @param s The memory area to search into.
 * @param c The byte to search for.
 * @param n The number of bytes to search.
 *
 * @returns A pointer to the first occurrence of c in s, or NULL if c is not
 * found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	s--;
	while (n-- && s++)
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
	return ((void *)0);
}
