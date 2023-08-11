/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:46:30 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 14:59:57 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*current;

	if (n == 0)
		return (s);
	current = (unsigned char *)s;
	while (n--)
	{
		*current = (unsigned char)c;
		if (n)
			current++;
	}
	return (s);
}
