/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:49:29 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:11:55 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_Stack **a, t_Stack **b)
{
	t_Stack	*temp;
	t_Stack	*current;
	int	median;

	ft_index(*a);
	ft_pos(*a);
	median = ft_length(*a) / 2;
	step_1(a, b, median);
	while (!is_sorted(*a))
		ft_subsort(a);
	current = *b;
	while (*b)
	{
		temp = cheapest(a, b);
		ft_execute(a, b, temp);
	}
	final_touches(a);
}
