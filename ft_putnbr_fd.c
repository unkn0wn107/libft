/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 19:59:06 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:05:45 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Prints an integer to a file descriptor.
 *
 * @param nb The integer to print.
 * @param fd The file descriptor to print to.
 *
 * @returns None
 */
void	ft_putnbr_fd(int nb, int fd)
{
	long int	n;

	n = (long int)nb;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (0 <= n && n < 10)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
}
