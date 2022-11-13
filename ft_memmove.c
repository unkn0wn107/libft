/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/11/13 23:47:02 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
