/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:18 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/16 17:29:46 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	if (c == '\0')
		return ((char *)&s[strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			last = (char *)&s[i];
		i++;
	}
	return (last);
}

/*
#include <stdio.h>

int	main(void)
{
	char *r;

	r = ft_strrchr("Hello World", ' ');
	printf("1 --> %s\n", r);
	r = ft_strrchr("Hello World", 'W');
	printf("2 --> %s\n", r);
	r = ft_strrchr("Hello World", 'B');
	printf("3 --> %s\n", r);
}
*/