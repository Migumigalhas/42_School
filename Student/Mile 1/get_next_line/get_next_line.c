/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:15:43 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/02 15:18:18 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;
	char		*temp;
	char		*newline;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_and_store(fd, storage);
	if (!storage)
		return (NULL);
	newline = ft_strchr(storage, '\n');
	if (newline)
		line = ft_substr(storage, 0, newline - storage + 1);
	else
		line = ft_substr(storage, 0, ft_strlen(storage));
	if (newline)
	{
		temp = ft_substr(newline + 1, 0, ft_strlen(newline + 1));
		free(storage);
		storage = temp;
	}
	else
	{
		free(storage);
		storage = NULL;
	}
	return (line);
}

/*
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s", line);
		free(line);
	}
	close(fd);
	return (0);
}
*/