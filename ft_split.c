/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 17:54:34 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/04 13:36:12 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static	size_t	ft_fill(const char *s1, char *s2, char c)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (s1[i] && s1[i] != c)
	{
		s2[i2++] = s1[i];
		i++;
	}
	s2[i2] = '\0';
	return (i);
}

static	void	*my_free(char **p)
{
	size_t	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
	return (NULL);
}

static	char	**ft_allocate(char **p, char const *s, char c)
{
	int	i;
	int	counter;

	if (!s)
		return (NULL);
	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	p = malloc((counter + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	i2;
	char	**p;

	p = NULL;
	p = ft_allocate(p, s, c);
	if (!p)
		return (NULL);
	i = 0;
	i2 = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			p[i2] = malloc((ft_wordlen(&s[i], c) + 1) * sizeof(char));
			if (!p[i2])
				return (my_free(p));
			i += ft_fill(&s[i], p[i2], c);
			i2++;
		}
		else
			i++;
	}
	p[i2] = NULL;
	return (p);
}
