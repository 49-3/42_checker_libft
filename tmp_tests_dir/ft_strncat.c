/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:03:13 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 07:10:52 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	dest_len;
	size_t	i;

	dest_len = ft_strlen(dest);
	i = -1;
	while (++i, i < n && src[i])
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
