/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:40 by agaley            #+#    #+#             */
/*   Updated: 2022/11/20 23:04:41 by alex             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_count_words(char const *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (str[i] && str[i] != c)
			count++;
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

char	*ft_strdup_word(char const *str, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	ft_strlcpy(word, str, i + 1);
	return (word);
}

char	**ft_split(char const *str, char c)
{
	size_t	wn;
	char	**tab;

	tab = (char **)malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	wn = 0;
	while (*str)
	{
		while (*str && *str == c)
			str++;
		tab[wn] = ft_strdup_word(str, c);
		if (*str && *str != c)
			wn++;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	if (wn == 0)
		free(tab[0]);
	tab[wn] = (void *)0;
	return (tab);
}
