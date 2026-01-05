/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:02:58 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/05 16:32:19 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_execute(t_Stack **a, t_Stack **b, t_Stack *node)
{
	t_Stack	*temp;
	int	b_size;
	int	a_size;

	b_size = ft_length(*b) / 2;
	a_size = ft_length(*a) / 2;
	while (*b != node)
	{
		if (node->position <= b_size)
			rb(b);
		else
			rrb(b);
	}
	temp = find_target(*a, node);
	while (*a != temp)
	{
		if (node->position <= a_size)
			ra(a);
		else
			rra(a);
	}
	pa(a, b);
}
