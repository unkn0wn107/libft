/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 20:12:57 by agaley            #+#    #+#             */
/*   Updated: 2022/12/17 14:31:10 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is alphanumeric.
 *
 * @param c The character to check.
 *
 * @returns 1 if the character is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
