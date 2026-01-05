/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:28:55 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/05 16:43:54 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Stack	*smallest_target(t_Stack *a)
{
	t_Stack	*temp;

	temp = a;
	while (a)
	{
		if (a->index < temp->index)
			temp = a;
		a = a->next;
	}
	return (temp);
}

void	step_1(t_Stack **a, t_Stack **b, int median)
{
	while (ft_length(*a) > 3)
	{
		if ((*a)->index >= median)
		{
			pb(a, b);
			rb(b);
		}
		else
			pb(a, b);
	}
}
