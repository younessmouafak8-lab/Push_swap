/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 14:37:15 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 20:53:54 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

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
void	ft_rotate(t_Stack **a);
void	ra(t_Stack **a);
void	rb(t_Stack **a);
void	rr(t_Stack **a, t_Stack **b);
void	ft_rrotate(t_Stack **a);
void	rra(t_Stack **a);
void	rrb(t_Stack **a);
void	rrr(t_Stack **a, t_Stack **b);
void	ft_index(t_Stack	*a);
void	algo(t_Stack **a, t_Stack **b);
int		ft_length(t_Stack *a);
void	ft_pos(t_Stack	*a);
void	ft_subsort(t_Stack **a);
int		is_sorted(t_Stack	*a);
int		total_moves(t_Stack *a, t_Stack *b, t_Stack *node);
t_Stack	*find_target(t_Stack *a, t_Stack *node);
t_Stack	*smallest_target(t_Stack *a);
void	step_1(t_Stack **a, t_Stack **b, int median);
t_Stack	*cheapest(t_Stack **a, t_Stack **b);
void	ft_execute(t_Stack **a, t_Stack **b, t_Stack *node);
void	final_touches(t_Stack **a);

#endif