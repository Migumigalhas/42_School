/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:43 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:15:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*source;
	unsigned char		*dest;

	if (!dst && !src)
		return (NULL);
	source = (const unsigned char *)src;
	dest = (unsigned char *)dst;
	if (dest > source)
	{
		while (len > 0)
		{
			len--;
			dest[len] = source[len];
		}
	}
	else
	{
		while (len-- > 0)
			*dest++ = *source++;
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