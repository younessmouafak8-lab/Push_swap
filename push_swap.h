/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:37:15 by ymouafak          #+#    #+#             */
/*   Updated: 2025/12/29 15:22:58 by ymouafak         ###   ########.fr       */
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
	int				d;
	struct stack	*next;
}t_Stack;

void	*ft_lstadd_back(t_Stack **lst, int content);
long	ft_atoi(const char *str, char **strs, t_Stack *p);
char	**ft_split(char const *s, char c);
void	*ft_free(char **p);
void	ft_free_list(t_Stack	**p);
void	ft_exit(t_Stack *p, char **str);
void	ft_swap(t_Stack	**p);
void	ft_push(t_Stack	**a, t_Stack **b);

#endif