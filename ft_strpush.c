/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:57:30 by agaley            #+#    #+#             */
/*   Updated: 2023/06/28 17:08:59 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpush(char *str, const char *add)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*new;

	if (!str)
		return (NULL);
	len = ft_strlen(str) + ft_strlen(add);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(str))
		new[i++] = str[j++];
	j = 0;
	while (i < len)
		new[i++] = add[j++];
	new[i] = '\0';
	free(str);
	return (new);
}
