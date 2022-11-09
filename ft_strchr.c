/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:08:49 by agaley            #+#    #+#             */
/*   Updated: 2022/11/09 19:15:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, char c)
{
	int		i;
	char	*s2;

	s2 = (char *)s;
	i = 0;
	while (s2[i])
	{
		if (s2[i] == c)
			return (&s2[i]);
		i++;
	}
	if (c == '\0')
		return (&s2[i]);
	return (NULL);
}
