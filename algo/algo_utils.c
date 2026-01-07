/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:28:55 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:51:24 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	int	a_size;

	a_size = ft_length(*a) - 3;
	while (ft_length(*a) > 3)
	{
		if ((*a)->index < a_size)
		{
			if ((*a)->index >= median && ft_length(*b) > 1)
			{
				pb(a, b);
				rb(b);
			}
			else
				pb(a, b);
		}
		else
			ra(a);
	}
}
