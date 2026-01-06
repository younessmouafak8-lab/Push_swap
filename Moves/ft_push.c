/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:03:26 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:51:54 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_Stack	**a, t_Stack **b)
{
	t_Stack	*to_push;

	if (!(*a))
		return ;
	to_push = *a;
	*a = (*a)->next;
	to_push->next = *b;
	*b = to_push;
}

void	pa(t_Stack	**a, t_Stack **b)
{
	ft_push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_Stack	**a, t_Stack **b)
{
	ft_push(a, b);
	write(1, "pb\n", 3);
}
