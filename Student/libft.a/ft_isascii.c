/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:18 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:14:36 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isascii('O'));
	printf("%d\n", ft_isascii('w'));
	printf("%d\n", ft_isascii('4'));
	printf("%d\n", ft_isascii(' '));
	printf("%d\n", ft_isascii('@'));
	printf("%d\n", ft_isascii('	'));
	return (0);
}
*/