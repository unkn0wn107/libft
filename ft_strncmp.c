/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:48:07 by agaley            #+#    #+#             */
/*   Updated: 2022/11/13 23:54:21 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// while ((s1[i] || s2[i]) && i < n)

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
		s1++;
		s2++;
	}
	return (0);
}
