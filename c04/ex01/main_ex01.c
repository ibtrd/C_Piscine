/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ex01.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 23:46:25 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/14 00:21:13 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_putstr(argv[1]);
	return (0);
}
