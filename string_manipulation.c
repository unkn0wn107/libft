/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_manipulation.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:11:26 by agaley            #+#    #+#             */
/*   Updated: 2023/05/08 23:01:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string and returns a pointer to the duplicate.
 *
 * @param s1 The string to duplicate.
 *
 * @returns A freeable pointer to the duplicated string.
 * NULL if allocation failed.
 */
char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*dup;

	i = 0;
	while (s1[i])
		i++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return ((char *)0);
	dup[i] = '\0';
	while (i--)
		dup[i] = s1[i];
	return (dup);
}

/**
 * Returns a len-long substring of a string, from start index.
 *
 * @param s The string to be sliced.
 * @param start The start index of the substring.
 * @param len The length of the substring.
 *
 * @returns The substring of the string, as a new string.
 * NULL if allocation failed.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	width;

	if (!s)
		return (NULL);
	width = ft_min(ft_strlen(s) - start, len);
	if (start >= ft_strlen(s))
		width = 0;
	str = malloc(sizeof(char) * (width + 1));
	if (!str)
		return (NULL);
	while (*s != '\0' && start--)
		s++;
	i = len;
	j = 0;
	while (*s != '\0' && i--)
	{
		*(str++) = (char)*(s++);
		j++;
	}
	*str = '\0';
	return (str - j);
}

/**
 * Joins two strings together.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 *
 * @returns A new string with joined s1 and s2.
 * NULL if allocation failed.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	char	*str;
	size_t	len1;
	size_t	len2;

	len1 = 0;
	if (s1)
		len1 = ft_strlen(s1);
	len2 = 0;
	if (s2)
		len2 = ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	out = str;
	while (len1--)
		*(str++) = (char)*(s1++);
	while (len2--)
		*(str++) = (char)*(s2++);
	*str = '\0';
	return (out);
}

char	ft_issep(char c, char const *charset)
{
	size_t	i;

	i = 0;
	while (charset && charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * Removes the specified characters from the begining and end of a string.
 *
 * @param s1 The string to trim.
 * @param set The characters to remove.
 *
 * @returns The trimmed string as a new string.
 * NULL if allocation failed or s1 is NULL.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	strlen;

	if (!s1)
		return (NULL);
	while (*s1 && ft_issep(*s1, set))
		s1++;
	strlen = ft_strlen(s1);
	s1 = s1 + strlen;
	while (strlen != 0 && ft_issep(*(s1 - 1), set) && strlen--)
		s1--;
	str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	s1 = s1 - strlen;
	ft_strlcpy(str, s1, strlen + 1);
	return (str);
}
