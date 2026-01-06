/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:02:58 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:56:35 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_extra_a(t_Stack **a, t_Stack *temp, int a_size)
{
	while (*a != temp)
	{
		if (temp->position <= a_size)
			ra(a);
		else
			rra(a);
	}
}

void	ft_extra_b(t_Stack **b, t_Stack *node, int b_size)
{
	while (*b != node)
	{
		if (node->position <= b_size)
			rb(b);
		else
			rrb(b);
	}
}

void	ft_execute(t_Stack **a, t_Stack **b, t_Stack *node)
{
	t_Stack	*temp;
	int	b_size;
	int	a_size;

	ft_pos(*b);
	ft_pos(*a);
	b_size = ft_length(*b) / 2;
	a_size = ft_length(*a) / 2;
	temp = find_target(*a, node);
	while (*b != node && *a != temp)
	{
		if (node->position <= b_size && temp->position <= a_size)
			rr(a,b);
		else if (node->position > b_size && temp->position > a_size)
			rrr(a, b);
		else
			break;
	}
	if (*b != node)
		ft_extra_b(b, node, b_size);
	if (*a != node)
		ft_extra_a(a, temp, a_size);
	pa(a, b);
}
