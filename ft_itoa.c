/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 01:31:43 by alex              #+#    #+#             */
/*   Updated: 2022/11/20 03:47:17 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_nbrlen(int nbr)
{
	int			i;
	int			min;
	long int	n;

	i = 0;
	min = 0;
	n = nbr;
	if (n < 0)
	{
		n *= -1;
		min = 1;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (++i + min);
}

char	*ft_itoa(int nbr)
{
	long int	n;
	char		*str;

	str = (char *)malloc((1 + ft_nbrlen(nbr)) * sizeof(char));
	n = nbr;
	if (n < 0)
		n *= -1;
	str = str + ft_nbrlen(nbr);
	*(str--) = '\0';
	if (n == 0)
		*(str--) = '0';
	while (n != 0)
	{
		if (n < 10)
			*(str--) = n + '0';
		else
			*(str--) = n % 10 + '0';
		n /= 10;
	}
	if (nbr < 0)
		*str = '-';
	else
		str++;
	return (str);
}
