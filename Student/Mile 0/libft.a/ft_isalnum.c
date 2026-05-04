/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:15 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:14:32 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
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