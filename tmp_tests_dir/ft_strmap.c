/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 01:07:07 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/11 02:40:13 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*ret;

	if (!s)
		return (NULL);
	str = ft_strnew(ft_strlen(s));
	if (!str)
		return (NULL);
	ret = str;
	while (*s)
	{
		*str = (*f)(*s);
		str++;
		s++;
	}
	return (ret);
}
