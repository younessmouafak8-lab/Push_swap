/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:46:11 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 13:58:45 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pos(t_Stack	*a)
{
	int		position;

	position = 0;
	while (a)
	{
		a->position = position++;
		a = a->next;
	}
}
