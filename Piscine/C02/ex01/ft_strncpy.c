/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:28:03 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/28 16:28:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[40];
	
	printf("Before:\n");
	printf("Src --> %s\n", src);
	printf("Dest --> %s\n\n", dest);
	ft_strncpy(dest, src, 50);
	printf("After:\n");
	printf("Src --> %s\n", src);
	printf("Dest --> %s\n", dest);
	
	return (0);
}
*/
