/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:03:26 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 14:04:44 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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