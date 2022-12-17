/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:55:04 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:30:12 by agaley           ###   ########lyon.fr   */
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
