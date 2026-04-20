/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:55 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/20 18:14:07 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*copy;

	if (!s1)
		return (NULL);
	copy = malloc(ft_strlen(s1) + 1);
	i = 0;
	if (!copy)
		return (NULL);
	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*dup;

	dup = ft_strdup("OLA MIGUEL");
	printf("--> %s\n", dup);
	free(dup);
	return (0);
}
*/