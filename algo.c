/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 21:49:29 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 13:58:41 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo(t_Stack **a, t_Stack **b)
{
	// t_Stack	*i;
	// t_Stack	*j;
	int		median;

	ft_index(*a);
	ft_pos(*a);
	median = ft_length(*a) / 2;
	while (ft_length(*a) > 3)
	{
		if ((*a)->index >= median)
		{
			pa(a, b);
			ft_rotate(b);
		}
		else
			pa(a, b);
	}
	ft_printlist(*a);
	while (!is_sorted(*a))
		ft_subsort(a);
	
}
