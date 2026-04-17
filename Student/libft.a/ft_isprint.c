/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/17 13:02:17 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isprint('O'));
	printf("%d\n", ft_isprint('w'));
	printf("%d\n", ft_isprint('4'));
	printf("%d\n", ft_isprint(' '));
	printf("%d\n", ft_isprint('@'));
	printf("%d\n", ft_isprint('	'));
	return (0);
}
*/