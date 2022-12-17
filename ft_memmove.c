/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:02:01 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies n bytes from the memory areas src to dest (may overlap).
 *
 * @param dest The destination memory area.
 * @param src The source memory area.
 * @param n The number of bytes to copy.
 *
 * @returns A pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	m;
	void	*tmp;

	if (!(dest || src))
		return (NULL);
	tmp = dest;
	m = n;
	if ((const char *)dest > (const char *)src)
	{
		dest = dest + n - 1;
		src = src + n - 1;
		while (m--)
			*((unsigned char *)(dest--)) = *((unsigned char *)(src--));
	}
	else
	{
		while (m--)
			*((unsigned char *)dest++) = *((unsigned char *)src++);
	}
	return (tmp);
}
