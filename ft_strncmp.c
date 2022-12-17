/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:48:07 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:50:18 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares the first n characters of strings s1 and s2.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The number of characters to compare.
 *
 * @returns The difference between the first characters (as unsigned char)
 * that differ in s1 and s2.
 * 0 if the first n characters are equal or if n is equal to zero.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
		s1++;
		s2++;
	}
	return (0);
}
