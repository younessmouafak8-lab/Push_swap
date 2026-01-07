/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   total_moves.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 13:43:22 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:52:02 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	total_moves(t_Stack *a, t_Stack *b, t_Stack *node)
{
	int		total;
	int		a_size;
	int		b_size;
	t_Stack	*target;

	a_size = ft_length(a);
	b_size = ft_length(b);
	ft_pos(b);
	ft_pos(a);
	if (node->position <= b_size / 2)
		total = node->position;
	else
		total = b_size - node->position;
	target = find_target(a, node);
	if (target->position <= a_size / 2)
		total += target->position;
	else
		total += a_size - target->position;
	return (total);
}
