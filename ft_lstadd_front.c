/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:21:21 by ymouafak          #+#    #+#             */
/*   Updated: 2025/12/27 16:48:55 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_front(Stack **lst, int content)
{
	Stack *p;

	if (!lst)
		return ;
	p = malloc(sizeof(Stack));
	if (!p)
		return ;
	p->d = content;
	p->next = *lst;
	*lst = p;
}
