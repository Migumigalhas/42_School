/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:43 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/28 15:32:12 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*source;
	unsigned char		*dest;

	if (!dst && !src)
		return (NULL);
	source = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest > source)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dest[i] = source[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>

int	main(void)
{
	char	dest[13];
	char	src[] = "Diddy, pl no";

	ft_memmove(dest, src, 30);
	printf("--> %s\n", dest);
	return (0);
}
*/