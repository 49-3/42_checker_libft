/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 03:15:22 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/11 07:46:55 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s)
{
	size_t	i;

	i = 0;
	while ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t') && s[i])
		i++;
	return (i);
}

static size_t	get_end(char const *s)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	end;

	if (s)
	{
		start = get_start(s);
		end = get_end(s);
		if (end <= start)
			return (ft_strnew(0));
		return (ft_substr(s, start, end - start));
	}
	else
		return (NULL);
}
