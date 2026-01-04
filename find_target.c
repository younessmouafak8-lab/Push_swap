/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_target.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:58:45 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/04 14:52:57 by ymouafak         ###   ########.fr       */
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
	{
		while (a)
		{
			if (a->index == 0)
				target = a;
			a = a->next;
		}
	}
	return (target);
}
