/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:50:54 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 18:16:45 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cs;
	size_t			i;

	if (!n)
		return (NULL);
	cs = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (cs[i] == (unsigned char)c)
			return ((void *)&cs[i]);
		i++;
	}
	return (NULL);
}
