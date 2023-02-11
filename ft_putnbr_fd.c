/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:59:06 by agaley            #+#    #+#             */
/*   Updated: 2023/02/12 00:40:50 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints an integer to a file descriptor.
 *
 * @param nb The integer to print.
 * @param fd The file descriptor to print to.
 *
 * @returns size of printed integer or -1 if an error occured
 */
int	ft_putnbr_fd(int nb, int fd)
{
	long int	n;
	int			size;
	int			wsize;

	size = 0;
	n = (long int)nb;
	if (n < 0)
	{
		n *= -1;
		if (ft_putchar_fd('-', fd) == 1)
			size++;
		else
			return (-1);
	}
	if (0 <= n && n < 10)
		return (ft_putchar_fd(n + '0', fd));
	else
	{
		wsize = ft_putnbr_fd(n / 10, fd);
		if (wsize > 0 && ft_putchar_fd(n % 10 + '0', fd) == 1)
			size += wsize + 1;
		else
			return (-1);
	}
	return (size);
}
