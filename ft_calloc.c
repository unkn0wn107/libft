/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:37:25 by agaley            #+#    #+#             */
/*   Updated: 2022/11/23 21:41:23 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size && nmemb > SIZE_MAX / size)
		return ((void *)0);
	mem = malloc(nmemb * size);
	if (!mem)
		return ((void *)0);
	ft_bzero(mem, nmemb * size);
	return (mem);
}
