/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:05:03 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 15:23:54 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_swap(t_Stack	**a)
{
	t_Stack *to_swap;
	t_Stack *to_swap2;
	t_Stack *rest_list;

	if (!(*a) || !(*a)->next)
		return ;
	to_swap = *a;
	to_swap2 = (*a)->next;
	rest_list = to_swap2->next;
	to_swap->next = rest_list;
	to_swap2->next = to_swap;
	*a = to_swap2;
}

void	sa(t_Stack	**a)
{
	ft_swap(a);
}

void	sb(t_Stack	**b)
{
	ft_swap(b);
}

void	ss(t_Stack	**a, t_Stack	**b)
{
	ft_swap(a);
	ft_swap(b);	
}