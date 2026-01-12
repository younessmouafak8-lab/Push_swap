/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 15:15:50 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 14:11:00 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
