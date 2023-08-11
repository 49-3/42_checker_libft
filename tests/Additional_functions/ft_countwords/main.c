/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:27:54 by jtoty             #+#    #+#             */
/*   Updated: 2023/08/11 19:17:16 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int			main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_putnbr(ft_countwords("*n43*was*there*", '*'));
	else if (arg == 2)
		ft_putnbr(ft_countwords("*n43 *was *there *", '*'));
	else if (arg == 3)
		ft_putnbr(ft_countwords("n43*was****there*", '*'));
	else if (arg == 4)
		ft_putnbr(ft_countwords("*n43*was*there", '*'));
	else if (arg == 5)
		ft_putnbr(ft_countwords("***", '*'));
	else if (arg == 6)
		ft_putnbr(ft_countwords("", '*'));
	return (0);
}
