/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:03:26 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 14:10:37 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
