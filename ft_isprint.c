/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 23:12:57 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:49:58 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a character is printable including space.
 *
 * @param c The character to check.
 *
 * @returns 1 if the character is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (1);
	return (0);
}
