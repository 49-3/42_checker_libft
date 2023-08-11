/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 02:52:12 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 02:59:14 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i])
		i++;
	j = -1;
	while (++j, src[j])
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
