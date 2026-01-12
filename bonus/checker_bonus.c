/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:41:55 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 14:10:20 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

static int	ft_countlen(char *str)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (str[i] == 32 || str[i] == '0' || str[i] == '-' || str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		i++;
		counter++;
	}
	return (counter);
}

static int	ft_checks(char	*str, t_Stack	*p, int n)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (p)
	{
		if (p->d == n)
			return (0);
		p = p->next;
	}
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
		{
			counter++;
			if (counter > 1 || str[i + 1] == '\0' || str[i + 1] == ' ')
				return (0);
		}
		i++;
	}
	return (1);
}

static t_Stack	*get_num(char *str, t_Stack *p)
{
	int		i;
	char	**strs;
	int		count_len;
	long	n;

	i = 0;
	strs = ft_split(str, ' ');
	if (!strs || !(*strs))
		ft_exit(p, strs);
	while (strs[i])
	{
		count_len = ft_countlen(strs[i]);
		n = ft_atoi(strs[i], strs, p);
		if ((n >= INT_MIN && n <= INT_MAX) && count_len < 11
			&& ft_checks(strs[i], p, n))
		{
			if (!ft_lstadd_back(&p, n))
				ft_exit(p, strs);
		}
		else
			ft_exit(p, strs);
		i++;
	}
	ft_free(strs);
	return (p);
}

int	main(int argc, char **str)
{
	int		i;
	t_Stack	*a;
	t_Stack	*b;
	char	*arg;

	i = 1;
	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	while (i < argc)
	{
		a = get_num(str[i], a);
		i++;
	}
	arg = get_next_line(0);
	while (arg)
	{
		ft_execute_moves(arg, &a, &b);
		free(arg);
		arg = get_next_line(0);
	}
	ft_result(a, b, arg);
	return (0);
}
