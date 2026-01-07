/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:44:23 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:52:19 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_free(char **p)
{
	size_t	i;

	i = 0;
	if (!p)
		return (NULL);
	while (p[i])
		free(p[i++]);
	free(p);
	return (NULL);
}

void	ft_free_list(t_Stack	**p)
{
	t_Stack	*temp;
	t_Stack	*temp2;

	temp = *p;
	while (temp)
	{
		temp2 = temp;
		temp = temp->next;
		free(temp2);
	}
	*p = NULL;
}

void	ft_exit(t_Stack *p, char **str)
{
	ft_free(str);
	ft_free_list(&p);
	write(2, "Error\n", 6);
	exit(1);
}
