/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:53:16 by agaley            #+#    #+#             */
/*   Updated: 2023/03/10 23:20:02 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints a string to a file descriptor.
 *
 * @param s The string to print.
 * @param fd The file descriptor to print to.
 *
 * @returns length of printed string or -1 if an error occured
 */
int	ft_putstr_fd(const char *s, int fd)
{
	int	len;

	if (!s)
		return (write(fd, "(null)", 6));
	len = ft_strlen(s);
	return (write(fd, s, len));
}
