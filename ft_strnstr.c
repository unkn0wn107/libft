/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:59:04 by agaley            #+#    #+#             */
/*   Updated: 2022/11/10 10:36:50 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hs, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)hs);
	i = 0;
	while (hs[i] && i < len)
	{
		j = 0;
		while ((hs[i + j] == needle[j] || needle[j] == '\0') && i + j < len + 1)
		{
			if (!needle[j])
				return (&((char *)hs)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}