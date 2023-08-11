/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 18:50:46 by daribeir          #+#    #+#             */
/*   Updated: 2023/08/10 22:38:27 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*ret;

	ret = malloc(sizeof(void *) * size);
	if (!ret)
		return (NULL);
	ft_memset(ret, 0, size);
	return (ret);
}
