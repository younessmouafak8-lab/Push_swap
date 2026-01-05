/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/02 20:55:28 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/04 13:42:03 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_length(t_Stack *a)
{
	int		length;

	length = 0;
	while (a)
	{
		length++;
		a = a->next;
	}
	return (length);
}
