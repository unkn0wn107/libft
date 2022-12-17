/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:01:15 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 15:31:21 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Converts a character to lowercase.
 *
 * @param c The character to convert.
 *
 * @returns The lowercase version of the character.
 */
int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 'a' - 'A');
	return (c);
}
