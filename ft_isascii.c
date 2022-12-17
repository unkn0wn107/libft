/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:12:57 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:31:30 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a character is ASCII.
 *
 * @param c The character to check.
 *
 * @returns 1 if the character is ASCII, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
