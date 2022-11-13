/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 09:50:18 by agaley            #+#    #+#             */
/*   Updated: 2022/11/13 22:25:56 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	diff;

	while (n--)
	{
		diff = (*(unsigned char *)s1) - (*(unsigned char *)s2);
		if (diff != 0)
			return (diff);
		s1++;
		s2++;
	}
	return (0);
}
