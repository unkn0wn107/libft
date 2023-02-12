/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:02:40 by agaley            #+#    #+#             */
/*   Updated: 2023/02/12 02:15:52 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_base_error(char *base)
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

static int	ft_putnbr_baselen_fd(int nbr, char *base, int baselen, int fd)
{
	long int	nb;
	int			size;
	int			wsize;

	if (ft_base_error(base))
		return (-1);
	size = 0;
	nb = (long int)nbr;
	if (nb < 0)
	{
		if (ft_putchar_fd('-', fd) == 1)
			size++;
		else
			return (-1);
		nb *= -1;
	}
	if (0 <= nb && nb < baselen)
		return (size + ft_putchar_fd(base[nb], fd));
	else
	{
		wsize = ft_putnbr_baselen_fd(nb / baselen, base, baselen, fd);
		if (wsize > 0 && ft_putchar_fd(base[nb % baselen], fd) == 1)
			size += wsize + 1;
		else
			return (-1);
	}
	return (size);
}

int	ft_putnbr_base_fd(int nbr, char *base, int fd)
{
	unsigned int	baselen;

	baselen = 0;
	while (base[baselen])
		baselen++;
	return (ft_putnbr_baselen_fd(nbr, base, baselen, fd));
}
