/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:15:43 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/11 15:20:43 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;
	size_t		len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(storage), storage = NULL, NULL);
	if (!storage)
		storage = ft_duplen("", 0);
	storage = read_newline(fd, storage);
	if (!storage || !storage[0])
		return (free(storage), storage = NULL, NULL);
	len = 0;
	while (storage[len] && storage[len] != '\n')
		len++;
	if (storage[len] == '\n')
		line = ft_duplen(storage, len + 1);
	else
		line = ft_duplen(storage, len);
	if (!line)
		return (free(storage), storage = NULL, NULL);
	storage = update(storage);
	return (line);
}

/* 
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	// while ((line = get_next_line(fd)) != NULL)
	// {
	// 	printf("%s", line);
	// 	free(line);
	// }
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
*/