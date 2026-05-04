/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:50:31 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:14:59 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Ola nha mano";
	char *temp;

	temp = ft_memchr(str, 'm', 13);
	if (temp)
		printf("Found: %s\n", temp);
	else
		printf("Not Found\n");

	temp = ft_memchr(str, ' ', 67);
	if (temp)
		printf("Found: %s\n", temp);
	else
		printf("Not Found\n");

	temp = ft_memchr(str, 'W', 67);
	if (temp)
		printf("Found: %s\n", temp);
	else
		printf("Not Found\n");
	return (0);
}
*/