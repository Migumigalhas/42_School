/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 17:11:42 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/27 17:12:36 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "Hello";
	char	dest[6];
	
	printf("Before:\n");
	printf("Src --> %s\n", src);
	printf("Dest --> %s\n\n", dest);
	ft_strcpy(dest, src);
	printf("After:\n");
	printf("Src --> %s\n", src);
	printf("Dest --> %s\n", dest);
	
	return (0);
}
*/
