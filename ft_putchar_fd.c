/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:07:46 by agaley            #+#    #+#             */
/*   Updated: 2023/02/11 21:03:37 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to the file descriptor fd.
 *
 * @param c The character to write.
 * @param fd The file descriptor to write to.
 *
 * @returns 1 on success -1 if error occured, cf write return values for others
 */
int	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
