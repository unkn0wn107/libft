/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 00:34:06 by agaley            #+#    #+#             */
/*   Updated: 2023/03/22 01:20:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
