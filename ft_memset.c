/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:00:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory pointed to by s to the value of c.
 *
 * @param s The memory area to set.
 * @param c The value to set the memory area to.
 * @param n The number of bytes to set.
 *
 * @returns A pointer to s.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (n--)
		s2[n] = (unsigned char)c;
	return (s);
}
