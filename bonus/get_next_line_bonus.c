/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymouafak <ymouafak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:02:04 by ymouafak          #+#    #+#             */
/*   Updated: 2026/01/10 13:39:35 by ymouafak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker_bonus.h"

char	*my_free(char **str, char	*buffer)
{
	char	*temp;

	free(buffer);
	if (*str && (*str)[0] != '\0')
	{
		temp = ft_strdup(*str);
		free(*str);
		*str = NULL;
		return (temp);
	}
	free(*str);
	*str = NULL;
	return (NULL);
}

char	*lets_read(int fd)
{
	char		*buffer;
	ssize_t		bytes_read;
	int			ko_failed;
	char		*to_store;
	static char	*str;

	buffer = malloc((size_t)BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!(ft_strchr(str, '\n', &to_store)))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read <= 0)
			return (my_free(&str, buffer));
		buffer[bytes_read] = '\0';
		str = ft_strjoin(str, buffer, &ko_failed);
		if (!str && ko_failed == 1)
			return (free(buffer), NULL);
	}
	buffer = my_line(str, buffer);
	if (!buffer)
		return (NULL);
	str = ft_substr(to_store, 1, str);
	return (buffer);
}

char	*my_line(char	*str, char	*buffer)
{
	size_t	i;
	size_t	len;
	char	*line;

	len = 0;
	free(buffer);
	while (str[len] != '\n')
		len++;
	len++;
	line = malloc(len + 1);
	if (!line)
		return (free(str), NULL);
	i = 0;
	while (i < len)
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	return (lets_read(fd));
}
