/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:02:40 by agaley            #+#    #+#             */
/*   Updated: 2023/03/10 23:29:14 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base_error(const char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (1);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[j] == '+')
			return (1);
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	ft_putnbrblen_fd(long int nbr, const char *base, int bselen, int fd)
{
	long long int	nb;
	int				size;
	int				wsize;

	size = 0;
	nb = (long long int)nbr;
	if (nb < 0)
	{
		nb *= -1;
		if (ft_putchar_fd('-', fd) == 1)
			size++;
		else
			return (-1);
	}
	if (0 <= nb && nb < bselen)
		return (size + ft_putchar_fd(base[nb], fd));
	else
	{
		wsize = ft_putnbrblen_fd(nb / bselen, base, bselen, fd);
		if (wsize > 0 && ft_putchar_fd(base[nb % bselen], fd) == 1)
			size += wsize + 1;
		else
			return (-1);
	}
	return (size);
}

int	ft_putnbr_base_fd(long int nbr, const char *base, int fd)
{
	unsigned int	baselen;

	if (ft_base_error(base))
		return (-1);
	baselen = 0;
	while (base[baselen])
		baselen++;
	return (ft_putnbrblen_fd(nbr, base, baselen, fd));
}
