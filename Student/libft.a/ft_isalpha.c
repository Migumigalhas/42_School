/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:17 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/14 17:57:09 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c == '\0')
		return (0);
	if (c != '\0')
	{
		if ((c >= 'A' && c <= 'Z') || (c >= 'a'
				&& c <= 'z'))
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