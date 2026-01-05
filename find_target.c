/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:58:45 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/05 16:07:46 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Stack *find_target(t_Stack *a, t_Stack *node)
{
	t_Stack	*temp;
	t_Stack	*target;
	int min_bigger;

	temp = a;
	min_bigger = INT_MAX;
	target = NULL;
	while (temp)
	{
		if (temp->index > node->index && temp->d < min_bigger)
		{
			min_bigger = temp->d;
			target = temp;
		}
		temp = temp->next;
	}
	if (!target)
		target = smallest_target(a);
	return (target);
}
