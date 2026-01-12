/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 22:10:01 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/12 11:43:22 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_subsort(t_Stack **a)
{
	t_Stack	*i;
	t_Stack	*j;

	i = *a;
	j = i->next;
	if (j && (j->next) && i->index > j->index && i->index > (j->next)->index)
		ra(a);
	i = *a;
	j = i->next;
	if (j && i->index > j->index)
		sa(a);
	i = (*a)->next;
	j = i->next;
	if (j && i->index > j->index)
		rra(a);
	i = *a;
	j = i->next;
	j = j->next;
	if (j && i->index > j->index)
		rra(a);
	ft_pos(*a);
}
