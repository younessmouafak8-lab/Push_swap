/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:43:22 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/05 16:05:49 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_moves(t_Stack *a, t_Stack *b, t_Stack *node)
{
	int	total;
	int	a_size;
	int	b_size;
	t_Stack	*target;

	a_size = ft_length(a);
	b_size = ft_length(b);
	ft_pos(b);
	ft_pos(a);
	// printf("hh\n");
	if (node->position <= b_size)
		total = node->position;
	else
		total = b_size - node->position;
	target = find_target(a, node);
	// printf("hna\n");
	// printf("target -> %p",target);
	if (target->position <= a_size)
		total += target->position;
	else
		total += a_size - target->position;
	return (total);
}
