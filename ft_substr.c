/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:39:31 by agaley            #+#    #+#             */
/*   Updated: 2022/11/14 23:07:41 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

// 
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	while (s != '\0' && start--)
		s++;
	while (s != '\0' && len--)
		*(str++) = (char)*(s++);
	*str = '\0';
	return (str);
}
