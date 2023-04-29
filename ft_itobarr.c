/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itobarr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:20:56 by agaley            #+#    #+#             */
/*   Updated: 2023/04/15 16:42:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Convert a size-bits unsigned integer to a size-bits binary array.
*
* @param nbr - The integer to convert.
* @param size - The size of the integer.
* @param binstr - The size character-long (+1) NUL-terminated char bin array
*
* @return The byte array that corresponds to the integer.
*/
void	ft_itobarr(unsigned int nbr, unsigned int size, char *binstr)
{
	unsigned int		i;
	unsigned int		len;
	char				tmp;

	i = 0;
	while (nbr > 0)
	{
		binstr[i++] = nbr % 2 + '0';
		nbr /= 2;
	}
	while (i < size)
		binstr[i++] = '0';
	len = i;
	i = 0;
	while (i < len / 2)
	{
		tmp = binstr[i];
		binstr[i] = binstr[len - i - 1];
		binstr[len - i - 1] = tmp;
		i++;
	}
	binstr[size] = '\0';
}
