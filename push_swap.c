/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:06:29 by ymouafak          #+#    #+#             */
/*   Updated: 2025/12/27 17:21:13 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_countlen(char *str, int i)
{
	int counter;

	counter = 0;
	while (str[i] == 32 || str[i] == '0' || str[i] == '-' || str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		i++;
		counter++;
	}
	return (counter);
}

int	ft_checks(char	*str, Stack	*p, int n)
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
		if ((str[i] == '-' || str[i] == '+'))
		{
			counter++;
			if (counter > 1 || str[i + 1] == ' ' || str[i + 1] == '\0')
				return (0);
		}
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ' && (str[i] != '+' && str[i] != '-'))
			return(0);
		i++;
	}
	return (1);
}

void	ft_exit(Stack *p)
{
	Stack	*temp;

	while (p)
	{
		temp = p;
		p = p->next;
		free(temp);
	}

	write(2, "ERROR\n", 6);
	exit(1);
}

Stack	*get_num(char *str, Stack *p)
{
	int i;
	char	**strs;
	int count_len;
	long	n;

	i = 0;
	strs = ft_split(str, ' ');
	if (!strs || !(*strs))
	{
		ft_exit(p);	
	}
	printf("%p\n", strs);
	while (strs[i])
	{
		count_len = ft_countlen(strs[i], i);
		n = ft_atoi(strs[i]);
		if ((n >= INT_MIN && n <= INT_MAX) && count_len < 11 && ft_checks(strs[i], p, n))
			ft_lstadd_front(&p, n);
		else
			ft_exit(p);
		i++;
	}
	printf("%p\n", p);
	ft_free(strs);
	return (p);
}

int	main(int argc, char **str)
{
	int i;
	Stack	*p;
	Stack	*temp;

	i = 1;
	p = NULL;
	if (argc == 1)
		ft_exit(p);
	while (i < argc)
	{
		p = get_num(str[i], p);
		i++;
	}
	while (p)
	{
		printf("%d\n", p->d);
		p = p->next;
	}
	while (p)
	{
		temp = p;
		p = p->next;
		free(temp);
	}
}
