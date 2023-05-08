/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:57:30 by agaley            #+#    #+#             */
/*   Updated: 2023/05/09 01:54:13 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strpush(char *str, char *new)
{
	size_t	i;
	size_t	j;
	size_t	len;

	len = ft_strlen(str) + ft_strlen(new);
	str = ft_realloc(str, len);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (i < ft_strlen(str))
		i++;
	while (i < len)
		str[i++] = new[j++];
	str[i] = '\0';
	return (str);
}
