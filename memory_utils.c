/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 16:03:28 by agaley            #+#    #+#             */
/*   Updated: 2023/05/08 23:44:39 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory (set to zero) for nmemb elements of size bytes each.
 *
 * @param nmemb The number of elements to allocate.
 * @param size The size of each element.
 *
 * @returns A pointer to the allocated memory.
 * NULL if size is 0 or if allocation fails.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if (size && nmemb > SIZE_MAX / size)
		return ((void *)0);
	mem = malloc(nmemb * size);
	if (!mem)
		return ((void *)0);
	ft_bzero(mem, nmemb * size);
	return (mem);
}

/**
 * Changes the size of the string pointed to by p to size bytes.
 *
 * @param p The pointer to reallocate.
 * @param size The new size of the string.
 *
 * @return The pointer to the reallocated string, filled with '\0'.
 **/
char	*ft_realloc(char *p, size_t size)
{
	size_t	i;
	char	*str;

	str = malloc(size * sizeof(char));
	if (!str)
		return (NULL);
	if (!p)
		return (str);
	i = 0;
	while (p[i])
	{
		str[i] = p[i];
		i++;
	}
	while (i < size)
		str[i++] = '\0';
	free(p);
	return (str);
}
