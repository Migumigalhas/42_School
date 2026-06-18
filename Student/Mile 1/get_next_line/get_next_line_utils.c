/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:15:46 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/18 17:31:29 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	str = malloc(i + j + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
		str[i++] = s1[j++];
	while (*s2)
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

char	*ft_duplen(const char *s, size_t len)
{
	char	*dup;
	size_t	i;
	size_t	leng;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	leng = i;
	if (len > leng)
		len = leng;
	dup = malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*read_newline(int fd, char *line)
{
	char	*temp;
	int		bytes_read;
	char	*prev;

	bytes_read = 1;
	temp = malloc(BUFFER_SIZE + 1);
	if (!temp)
		return (free(line), NULL);
	while (!ft_strchr(line, '\n') && bytes_read != 0)
	{
		bytes_read = read(fd, temp, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(temp), free(line), NULL);
		temp[bytes_read] = '\0';
		prev = line;
		line = ft_strjoin(line, temp);
		free(prev);
		if (!line)
			return (free (temp), NULL);
	}
	free(temp);
	return (line);
}

char	*update(char *stash)
{
	int		i;
	char	*new;
	int		len;

	i = 0;
	if (!stash)
		return (NULL);
	while (stash[i] && stash[i] != '\n')
		i++;
	if (!stash[i] || !stash[i + 1])
	{
		free(stash);
		return (NULL);
	}
	len = 0;
	while (stash[i + 1 + len])
		len++;
	new = ft_duplen(stash + i + 1, len);
	free(stash);
	return (new);
}
