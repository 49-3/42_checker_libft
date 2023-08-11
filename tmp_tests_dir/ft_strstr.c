/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:50:17 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 05:18:15 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i;
	size_t	to_find_len;

	i = -1;
	to_find_len = ft_strlen(s2);
	if (!s2[0])
		return ((char *)&s1[0]);
	while (++i, s1[i])
		if (ft_strncmp(&s1[i], s2, to_find_len) == 0)
			return ((char *)&s1[i]);
	return (0);
}
