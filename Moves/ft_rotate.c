/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:05:25 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/06 15:46:31 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_Stack **a)
{
	t_Stack	*to_rotate;
	t_Stack	*temp;

	if (!(*a) || !(*a)->next)
		return ;
	to_rotate = *a;
	temp = *a;
	while (temp->next)
		temp = temp->next;
	temp->next = to_rotate;
	*a = (*a)->next;
	to_rotate->next = NULL;
}

void	ra(t_Stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_Stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_Stack **a, t_Stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rr\n", 3);
}
