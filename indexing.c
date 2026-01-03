/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:15:50 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 13:58:44 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_Stack	*a)
{
	t_Stack	*i;
	t_Stack	*j;
	int		index;

	i = a;
	while (i)
	{
		index = 0;
		j = a;
		while (j)
		{
			if (i->d > j->d)
				index++;
			j = j->next;
		}
		i->index = index;
		i = i->next;
	}
}
