/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:07:46 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:03:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to the file descriptor fd.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 *
 * @returns None
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
