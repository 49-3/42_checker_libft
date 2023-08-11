/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 02:51:58 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/11 07:09:11 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strnew(1));
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	return (ft_strncpy(str, &s[start], len));
}
