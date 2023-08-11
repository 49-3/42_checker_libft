/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:49:27 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 16:00:33 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*cdest;
	char	*csrc;
	size_t	i;

	if (n == 0 || dest == src)
		return (dest);
	cdest = (char *)dest;
	csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		if (cdest[i] == c)
			return (cdest + i + 1);
		i++;
	}
	return (NULL);
}
