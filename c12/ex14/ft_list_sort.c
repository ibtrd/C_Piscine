/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 21:55:38 by ibertran          #+#    #+#             */
/*   Updated: 2023/08/15 08:27:58 by ibertran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	void	*tmp;
	t_list	*curr;
	t_list	*next;

	if (!*begin_list)
		return ;
	curr = *begin_list;
	while (curr->next)
	{
		next = curr->next;
		if ((*cmp)(curr->data, next->data) > 0)
		{
			tmp = curr->data;
			curr->data = next->data;
			next->data = tmp;
			curr = *begin_list;
		}
		else
			curr = curr->next;
	}
}
