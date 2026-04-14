/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/14 17:58:58 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c == '\0')
		return (0);
	while (c != '\0')
	{
		if (c >= 32 && c <= 126)
			c++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalnum('O'));
	printf("%d\n", ft_isalnum('w'));
	printf("%d\n", ft_isalnum('4'));
	printf("%d\n", ft_isalnum(' '));
	printf("%d\n", ft_isalnum('@'));
	printf("%d\n", ft_isalnum('	'));
	return (0);
}
*/