/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:06:12 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/31 15:06:14 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (n < 1)
		return (0);
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

/*
#include <stdio.h>

int	main(void)
{
	char s1[] = "werwr";
	char s2[] = "wegtr";
	int	r;

	r = ft_strncmp(s1, s2, 4);
	printf("R: %d", r);
	return (0);
}
*/
