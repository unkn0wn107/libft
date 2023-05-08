/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:12:47 by agaley            #+#    #+#             */
/*   Updated: 2023/05/08 16:13:11 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_min(size_t val1, size_t val2)
{
	if (val1 <= val2)
		return (val1);
	return (val2);
}

/**
* Raise a number to a power.
*
* @param nb - number to raise to power
* @param power - power to raise the number to
*
* @return the number raised to the power
*/
int	ft_pow(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		res = 0;
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}
