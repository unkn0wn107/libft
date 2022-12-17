/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 23:12:57 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:51:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * Checks if a character is an alphabetic character.
 *
 * @param c The character to check.
 *
 * @returns 1 if the character is alphabetical, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
		return (1);
	return (0);
}
