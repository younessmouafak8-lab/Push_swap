/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 15:05:25 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 14:10:44 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

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
