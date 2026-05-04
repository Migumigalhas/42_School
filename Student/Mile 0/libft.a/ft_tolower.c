/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:16:03 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("1 --> %c\n", ft_tolower('Z'));
	printf("2 --> %c\n", ft_tolower('t'));
	printf("3 --> %c\n", ft_tolower('6'));
	printf("4 --> %c\n", ft_tolower('@'));
	printf("5 --> %c\n", ft_tolower(' '));
	return (0);
}
*/