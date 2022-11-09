/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/11/09 16:46:09 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	m;

	m = n;
	if ((const char *)dest <= (const char *)src)
	{
		while (m--)
		{
			(const char *)dest--;
			*((unsigned char *)dest) = *((unsigned char *)(src + n));
			(const char *)src--;
		}
	}
	else
	{
		while (m--)
		{
			*((unsigned char *)dest) = *((unsigned char *)src);
			(const char *)dest++;
			(const char *)src++;
		}
		dest = dest - n;
	}
	return (dest);
}
