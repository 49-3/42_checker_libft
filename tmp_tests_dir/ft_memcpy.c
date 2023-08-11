/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:15:55 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 15:30:50 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*cdest;
	char	*csrc;

	if (n == 0 || dest == src)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)src;
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}
