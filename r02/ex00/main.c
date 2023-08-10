/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 21:57:42 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/23 21:54:27 by ibjean-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (rush02_init(argv[1]) != 1)
			return (-1);
		return (0);
	}
	ft_error();
	return (-1);
}