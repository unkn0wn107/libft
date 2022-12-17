/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:12:57 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:50:24 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a character is a digit (0-9).
 *
 * @param c The character to check.
 * @returns 1 if the character is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
