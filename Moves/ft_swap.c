/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 11:24:42 by ymouafak          #+#    #+#             */
/*   Updated: 2025/12/29 14:47:30 by ymouafak         ###   ########.fr       */
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
