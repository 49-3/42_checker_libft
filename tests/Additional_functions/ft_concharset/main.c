/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daribeir <na.3@laposte.net>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/28 15:27:54 by jtoty             #+#    #+#             */
/*   Updated: 2023/08/11 17:48:50 by daribeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static void	ft_print_result(int n)
{
	if (n == 1)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int			main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_concharset('k', "k"));
	else if (arg == 2)
		ft_print_result(ft_concharset('s', "ksk"));
	else if (arg == 3)
		ft_print_result(ft_concharset(' ', "k s k"));
	else if (arg == 4)
		ft_print_result(ft_concharset('k', " s "));
	return (0);
}
