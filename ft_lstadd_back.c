/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:04:19 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/04 14:37:56 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_lstadd_back(t_Stack **lst, int content)
{
	t_Stack	*p;
	t_Stack	*new;

	if (!lst)
		return (NULL);
	new = malloc(sizeof(t_Stack));
	if (!new)
		return (NULL);
	p = *lst;
	new->d = content;
	new->next = NULL;
	if (!p)
	{
		*lst = new;
		return (*lst);
	}
	while (p->next)
		p = p->next;
	p->next = new;
	return (*lst);
}
