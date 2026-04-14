/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:20 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/14 17:58:32 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c == '\0')
		return (0);
	while (c != '\0')
	{
		if (c >= '0' && c <= '9')
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