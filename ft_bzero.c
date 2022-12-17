/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:45:20 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:56:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory area pointed to by s to 0 ('\0').
 *
 * @param s The memory area to be zeroed.
 * @param n The number of bytes to be zeroed.
 *
 * @returns None
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
