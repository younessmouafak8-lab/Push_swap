/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:43:22 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:11:14 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_moves(t_Stack *a, t_Stack *b, t_Stack *node)
{
	int	total;
	int	a_size;
	int	b_size;
	int	a_median;
	int	b_median;
	t_Stack	*target;

	a_size = ft_length(a);
	b_size = ft_length(b);
	a_median = a_size / 2 ;
	b_median = b_size / 2;
	ft_pos(b);
	ft_pos(a);
	if (node->position <= b_median)
		total = node->position;
	else
		total = b_size - node->position;
	target = find_target(a, node);
	if (target->position <= a_median)
		total += target->position;
	else
		total += a_size - target->position;
	return (total);
}
