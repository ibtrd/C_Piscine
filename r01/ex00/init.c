/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:04:30 by ibertran          #+#    #+#             */
/*   Updated: 2023/07/16 21:33:30 by mtrognon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_grid(char grid[4][4])
{
	int	x;
	int	y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			grid[y][x] = '0';
			x++;
		}
		y++;
	}
}

void	init_line(char *line)
{
	int	x;

	x = 0;
	while (x < 4)
	{
		line[x] = '0';
		x++;
	}
}
