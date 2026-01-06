/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:12:57 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:46:16 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrotate(t_Stack **a)
{
	t_Stack	*to_rotate;
	t_Stack	*temp;

	if (!(*a) || !(*a)->next)
		return ;
	temp = *a;
	while (temp->next)
		temp = temp->next;
	to_rotate = temp;
	to_rotate->next = *a;
	temp = *a;
	while (temp->next != to_rotate)
		temp = temp->next;
	temp->next = NULL;
	*a = to_rotate;
}

void	rra(t_Stack **a)
{
	ft_rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_Stack **b)
{
	ft_rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_Stack **a, t_Stack **b)
{
	ft_rrotate(a);
	ft_rrotate(b);
	write(1, "rrr\n", 4);
}
