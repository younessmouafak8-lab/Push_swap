/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:44:13 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/07 21:50:09 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strchr(char *s, int c, char **to_store)
{
	int	i;

	i = 0;
	while (s && s[i])
	{
		if (s[i] == (char)c)
		{
			*to_store = &s[i];
			return (1);
		}
		i++;
	}
	*to_store = NULL;
	return (0);
}

static	size_t	my_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char	*s1, char	*s2, int *failed)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1 || !s2)
		return (ft_strdup(s2));
	len = my_strlen(s1) + my_strlen(s2);
	p = malloc((len + 1));
	if (!p)
	{
		*failed = 1;
		return (free(s1), NULL);
	}
	i = 0;
	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (free(s1), p);
}

char	*ft_substr(char *s, unsigned int start, char *str)
{
	size_t	sublen;
	size_t	i;
	char	*p;

	if (!s || s[start] == '\0')
		return (free(str), NULL);
	sublen = my_strlen(&s[start]);
	p = malloc((sublen + 1));
	i = 0;
	if (!p)
		return (NULL);
	while (s[start])
		p[i++] = s[start++];
	p[i] = '\0';
	free(str);
	return (p);
}

char	*ft_strdup(char *s)
{
	size_t	i;
	char	*p;

	if (!s)
		return (NULL);
	p = malloc((my_strlen(s) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
