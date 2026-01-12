/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_moves_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 13:07:59 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 13:39:25 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

void	execute_helper(char *str, t_Stack **a, t_Stack **b)
{
	if (!ft_strcmp(str, "ss\n"))
	{
		ft_swap(a);
		ft_swap(b);
	}
	else if (!ft_strcmp(str, "rr\n"))
	{
		ft_rotate(a);
		ft_rotate(b);
	}
	else if (!ft_strcmp(str, "rrr\n"))
	{
		ft_rrotate(a);
		ft_rrotate(b);
	}
}

void	ft_execute_moves(char *str, t_Stack **a, t_Stack **b)
{
	if (!ft_strcmp(str, "sa\n"))
		ft_swap(a);
	else if (!ft_strcmp(str, "sb\n"))
		ft_swap(b);
	else if (!ft_strcmp(str, "ss\n"))
		execute_helper(str, a, b);
	else if (!ft_strcmp(str, "pa\n"))
		ft_push(b, a);
	else if (!ft_strcmp(str, "pb\n"))
		ft_push(a, b);
	else if (!ft_strcmp(str, "ra\n"))
		ft_rotate(a);
	else if (!ft_strcmp(str, "rb\n"))
		ft_rotate(b);
	else if (!ft_strcmp(str, "rr\n"))
		execute_helper(str, a, b);
	else if (!ft_strcmp(str, "rra\n"))
		ft_rrotate(a);
	else if (!ft_strcmp(str, "rrb\n"))
		ft_rrotate(b);
	else if (!ft_strcmp(str, "rrr\n"))
		execute_helper(str, a, b);
	else
		ft_checker_exit(a, b, str);
}
