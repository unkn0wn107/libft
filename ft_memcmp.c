/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:50:18 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:45:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first n bytes (as unsigned char) of memory areas s1 and s2.
 *
 * @param s1 The first memory area.
 * @param s2 The second memory area.
 * @param n The number of characters to compare.
 *
 * @returns The difference between the first bytes (as unsigned char)
 * that differ in s1 and s2.
 * 0 if the first n bytes are equal or if n is equal to zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;

	while (n--)
	{
		diff = (*(unsigned char *)s1++) - (*(unsigned char *)s2++);
		if (diff != 0)
			return (diff);
	}
	return (0);
}
