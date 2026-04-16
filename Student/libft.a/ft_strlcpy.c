/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:07 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/16 16:35:00 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	int	i;
	
	i = 0;
	while (src[i] != '\0' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Ola eu sou o Miguel";
	char dest [] = "";
	strlcpy(dest, src, 10);
	printf("--> %s", dest);
	return (0);
}
*/