/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_i32tob.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 01:20:56 by agaley            #+#    #+#             */
/*   Updated: 2023/04/14 20:20:54 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Convert a 32-bits unsigned integer to a 32 - bits binary array.
*
* @param nbr - The integer to convert.
* @param binstr - The 32 character-long (+1) terminated char bin array
*
* @return The byte array that corresponds to the integer.
*/
void	ft_i32tob(unsigned int nbr, char *binstr)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	while (nbr > 0)
	{
		binstr[i++] = nbr % 2 + '0';
		nbr /= 2;
	}
	while (i < 32)
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
	binstr[32] = '\0';
}

// int main() {
// 	unsigned int unicode = UINT32_MAX;
// 	char bin[33];
// 	ft_itobstr(unicode, bin);
// 	printf("%u = %s\n", unicode, bin);
// 	return 0;
// }
