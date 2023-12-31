/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:13:21 by ibertran          #+#    #+#             */
/*   Updated: 2023/09/14 12:47:11 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	while (nb > 0)
	{
		nb = nb - x;
		x = x + 2;
		i++;
	}
	if (nb == 0)
		return (i);
	else
		return (0);
}
