/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 01:07:46 by agaley            #+#    #+#             */
/*   Updated: 2023/02/13 00:17:06 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a pointer address to the file descriptor fd.
 *
 * @param ptr The pointer of which to write the address.
 * @param fd The file descriptor to write to.
 *
 * @returns >0 on success -1 if error occured, cf write return values for others
 */
int	ft_putptr_fd(void *ptr, int fd)
{
	int	size;

	if (!ptr)
		return (ft_putstr_fd("(nil)", fd));
	size = ft_puthex_fd((unsigned long)ptr, 1, fd);
	if (size < 0)
		return (-1);
	return (size);
}
