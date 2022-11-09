/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/11/10 00:51:59 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;

	dest2 = (unsigned char *)dest;
	if (!(dest && src))
		return ((void *)0);
	while (n--)
		dest2[n] = ((unsigned char *)src)[n];
	return (dest);
}
