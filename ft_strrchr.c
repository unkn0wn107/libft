/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/12/08 07:25:04 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*s2;

	s2 = (char *)s;
	len = ft_strlen(s2);
	if ((char)c == '\0')
		return ((char *)s + len);
	if (len == 0)
		return ((void *)0);
	while (len--)
		if (s2[len] == (char)c)
			return (&s2[len]);
	return ((void *)0);
}
