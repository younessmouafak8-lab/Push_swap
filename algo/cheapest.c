/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 15:26:38 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:51:32 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_Stack	*cheapest(t_Stack **a, t_Stack **b)
{
	t_Stack	*temp;
	t_Stack	*cheap;
	int		cost;
	int		temp_cost;

	temp = *b;
	cheap = temp;
	cost = total_moves(*a, *b, temp);
	while (temp)
	{
		temp_cost = total_moves(*a, *b, temp);
		if (cost > temp_cost)
		{
			cost = temp_cost;
			cheap = temp;
		}
		temp = temp->next;
	}
	return (cheap);
}
