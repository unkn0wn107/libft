/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:55:40 by agaley            #+#    #+#             */
/*   Updated: 2022/11/20 01:11:44 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_count_words(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
			i++;
		count++;
		while (str[i] && str[i] == c)
			i++;
	}
	return (count);
}

char	*ft_strdup_word(char *str, char c, int start)
{
	int		i;
	char	*word;

	i = start;
	while (str[i] && str[i] != c)
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[start] && str[start] != c)
	{
		word[i] = str[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char c)
{
	int		i;
	int		wn;
	char	**tab;

	tab = (char **)malloc((ft_count_words(str, c) + 1) * sizeof(char *));
	i = 0;
	wn = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		tab[wn] = ft_strdup_word(str, c, i);
		while (str[i] && str[i] != c)
			i++;
		wn++;
		while (str[i] && str[i] == c)
			i++;
	}
	tab[wn] = (void *)0;
	return (tab);
}
