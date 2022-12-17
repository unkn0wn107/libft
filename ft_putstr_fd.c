/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:53:16 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:08:51 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints a string to a file descriptor.
 *
 * @param s The string to print.
 * @param fd The file descriptor to print to.
 *
 * @returns None
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
