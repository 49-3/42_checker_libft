/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 03:55:55 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/11 06:38:16 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	j = 0;
	while (j < len && haystack[j])
	{
		i = 0;
		while (j < len && needle[i] && haystack[j] && needle[i] == haystack[j])
		{
			++i;
			++j;
		}
		if (needle[i] == '\0')
			return ((char *)&haystack[j - i]);
		j = j - i + 1;
	}
	return (0);
}
