/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 02:19:57 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 02:38:15 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	i;

	i = -1;
	while (++i, src[i])
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
