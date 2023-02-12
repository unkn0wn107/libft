/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_base_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 14:02:40 by agaley            #+#    #+#             */
/*   Updated: 2023/02/13 00:18:39 by agaley           ###   ########lyon.fr   */
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

int	ft_putunbr_base_fd(unsigned long int nbr, char *base, int fd)
{
	size_t					baselen;
	int						size;
	int						wsize;

	if (ft_base_error(base))
		return (-1);
	baselen = ft_strlen(base);
	size = 0;
	if (nbr >= baselen)
	{
		wsize = ft_putunbr_base_fd(nbr / baselen, base, fd);
		if (wsize > 0 && ft_putchar_fd(base[nbr % baselen], fd) == 1)
			size += wsize + 1;
		else
			return (-1);
	}
	else if (ft_putchar_fd(base[nbr], fd) == 1)
		return (size + 1);
	else
		return (-1);
	return (size);
}
