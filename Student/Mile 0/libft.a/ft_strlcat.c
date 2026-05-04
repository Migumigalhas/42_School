/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:05 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:15:35 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	j = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	len = i;
	if (len == size)
		return (size + ft_strlen(src));
	while (src[j] != '\0' && (len + j + 1 < size))
	{
		dest[len + j] = src[j];
		j++;
	}
	if (len + j < size)
		dest[len + j] = '\0';
	return (len + ft_strlen(src));
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[20] = "Ola eu";
	char	src[] = " sou o Miguel";

	strlcat(dest, src, 18);
	printf("--> %s", dest);
	return (0);
}
*/