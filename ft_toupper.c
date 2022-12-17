/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:01:15 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:31:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts a lowercase character to uppercase.
 *
 * @param c The character to convert.
 *
 * @returns The uppercase version of the character.
 */
int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c + 'A' - 'a');
	return (c);
}
