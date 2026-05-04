/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:19 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:15:53 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_set(s1[i], set))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_set(s1[j - 1], set))
		j--;
	str = malloc(j - i + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + i, j - i + 1);
	return (str);
}

/* 
#include <stdio.h>

int	main(void)
{
	char *r;
	char str[] = "xxxOLAxxx42x";
	r = ft_strtrim(str, "x");
	printf("--> %s\n", r);
	free(r);
	return (0);
}
*/