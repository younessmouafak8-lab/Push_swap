/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:37:15 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 15:41:43 by ymouafak         ###   ########.fr       */
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
	int				index;
	int				position;
	struct stack	*next;
}t_Stack;

void	*ft_lstadd_back(t_Stack **lst, int content);
long	ft_atoi(const char *str, char **strs, t_Stack *p);
char	**ft_split(char const *s, char c);
void	*ft_free(char **p);
void	ft_free_list(t_Stack	**p);
void	ft_exit(t_Stack *p, char **str);
void	ft_swap(t_Stack	**p);
void	sa(t_Stack	**a);
void	sb(t_Stack	**b);
void	ss(t_Stack	**a, t_Stack	**b);
void	ft_push(t_Stack	**a, t_Stack **b);
void	pa(t_Stack	**a, t_Stack **b);
void	pb(t_Stack	**a, t_Stack **b);
void	ft_printlist(t_Stack *p);
void	ft_rotate(t_Stack **a);
void	ft_rrotate(t_Stack **a);
void	ft_index(t_Stack	*a);
void	algo(t_Stack **a, t_Stack **b);
int	ft_length(t_Stack *a);
void	ft_pos(t_Stack	*a);
void	ft_subsort(t_Stack **a);
int	is_sorted(t_Stack	*a);

#endif