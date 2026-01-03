/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 11:58:50 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 13:58:43 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_Stack	*a)
{
	t_Stack	*i;
	t_Stack	*j;

	i = a;
	while (i)
	{
		j = i->next;
		if (j && i->index > j->index)
			return  (0);
		i = i->next;
	}
	return (1);
}
