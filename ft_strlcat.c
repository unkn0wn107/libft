/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 14:46:18 by agaley            #+#    #+#             */
/*   Updated: 2022/12/08 08:47:32 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	len;

	if (!dst && size == 0)
		return (ft_strlen(src));
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
