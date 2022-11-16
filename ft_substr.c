/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:39:31 by agaley            #+#    #+#             */
/*   Updated: 2022/11/16 01:32:07 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (*s != '\0' && start--)
		s++;
	i = len;
	while (*s != '\0' && i--)
		*(str++) = (char)*(s++);
	*str = '\0';
	return (str - len);
}
