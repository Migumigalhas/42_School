/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:54 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/16 18:57:46 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}


#include <stdio.h>

int	main(void)
{
	char *r;

	r = strchr("Hello World", ' ');
	printf("1 --> %s\n", r);
	r = strchr("Hello World", 'W');
	printf("2 --> %s\n", r);
	r = strchr("Hello World", 'B');
	printf("3 --> %s\n", r);
}
