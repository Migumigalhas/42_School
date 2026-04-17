/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:23 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/17 13:18:52 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("1 --> %c\n", ft_toupper('Z'));
	printf("2 --> %c\n", ft_toupper('t'));
	printf("3 --> %c\n", ft_toupper('6'));
	printf("4 --> %c\n", ft_toupper('@'));
	printf("5 --> %c\n", ft_toupper(' '));
	return (0);
}
*/