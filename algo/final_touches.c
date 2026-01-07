/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_touches.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 15:34:13 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:51:35 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	final_touches(t_Stack **a)
{
	t_Stack	*temp;
	t_Stack	*head;
	int		median;

	temp = *a;
	median = ft_length(*a) / 2;
	ft_pos(*a);
	while (temp)
	{
		if (temp->index == 0)
			head = temp;
		temp = temp->next;
	}
	while (*a != head)
	{
		if (head->position <= median)
			ra(a);
		else
			rra(a);
	}
}
