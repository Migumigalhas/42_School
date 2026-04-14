/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:37:14 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/30 11:37:17 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char dest[] = "wrewwr";
	char src[] = "wreatt";
	int	r;
	
	r = ft_strcmp(dest, src);
	printf("Res: %d", r);
	return (0);
}
*/
