/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:37:15 by ymouafak          #+#    #+#             */
/*   Updated: 2025/12/27 17:08:49 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>

typedef struct stack
{
	int d;
	struct stack *next;
}Stack;

void	ft_lstadd_front(Stack **lst, int content);
long	ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	*ft_free(char **p);

#endif