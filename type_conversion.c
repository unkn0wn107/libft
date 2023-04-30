/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 01:45:29 by agaley            #+#    #+#             */
/*   Updated: 2023/04/30 01:55:56 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer.
 *
 * @param str The string to convert.
 *
 * @returns The integer representation of the string.
 */
int	ft_atoi(const char *str)
{
	int					sign;
	size_t				i;
	unsigned long int	result;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (result != (10 * result + (str[i] - '0')) / 10)
			return ((sign + 1) / -2);
		result = 10 * result + (str[i] - '0');
		i++;
	}
	return ((int)(sign * result));
}

/**
 * Converts an integer to a string.
 *
 * @param nbr The integer to convert.
 *
 * @returns The string representation of the integer.
 */
char	*ft_itoa(int nbr)
{
	char		*str;

	str = (char *)malloc((1 + ft_nbrlen(nbr)) * sizeof(char));
	if (!str)
		return (NULL);
	ft_nbrcpy(str, nbr);
	return (str);
}

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

/**
* Convert an integer to a 8 - bits array.
*
* @param nb - The integer to convert.
*
* @return The byte array that corresponds to the integer.
*/
t_byte	ft_itob(int nb)
{
	t_byte	byte;
	int		i;

	i = 0;
	while (i++ < 8)
		byte.arr[i] = nb & ft_pow(2, 7 - i);
	return (byte);
}

unsigned char	ft_btoi(unsigned char *barr)
{
	size_t			i;
	unsigned char	c;

	i = 0;
	c = 0;
	while (barr[i])
	{
		c += (barr[i] - '0') * ft_pow(2, 7 - i);
		i++;
	}
	return (c);
}
