/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:17 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/27 16:49:54 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('O'));
	printf("%d\n", ft_isalpha('w'));
	printf("%d\n", ft_isalpha('4'));
	printf("%d\n", ft_isalpha(' '));
	printf("%d\n", ft_isalpha('@'));
	printf("%d\n", ft_isalpha('	'));
	return (0);
}
*/