/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/11/09 19:23:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = ft_strlen(s2) - 1;
	if (c == '\0')
		return (s2 + i + 1);
	while (i >= 0)
	{
		if (s2[i] == c)
			return (&s2[i]);
		i--;
	}
	return (NULL);
}
