/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 21:46:28 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/03 13:59:08 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi(const char *str, char **strs, t_Stack *p)
{
	int				i;
	int				sign;
	unsigned long	res;

	i = 0 ;
	sign = 1;
	res = 0;
	while (str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (res > (unsigned long)(9223372036854775807 - (str[i] - 48)) / 10)
			return (-(sign > 0));
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (str[i] != '\0')
		ft_exit(p, strs);
	return (res * sign);
}
