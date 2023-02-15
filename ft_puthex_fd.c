/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <agaley@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 15:30:22 by agaley            #+#    #+#             */
/*   Updated: 2023/02/15 21:15:40 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex_fd(unsigned long int hex, char low, int fd)
{
	if (low == 1)
		return (ft_putunbr_base_fd(hex, "0123456789abcdef", fd));
	else if (low == 0)
		return (ft_putunbr_base_fd(hex, "0123456789ABCDEF", fd));
	else
		return (-1);
}
