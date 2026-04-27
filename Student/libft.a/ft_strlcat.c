/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:05 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/27 16:40:22 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && i < (size - 1) && size > 0)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (i + ft_strlen(src + j));
}

/*
#include <stdio.h>

int	main(void)
{
	char dest[20] = "Ola eu";
	char src[] = " sou o Miguel";
	strlcat(dest, src, 18);
	printf("--> %s", dest);
	return (0);
}
*/