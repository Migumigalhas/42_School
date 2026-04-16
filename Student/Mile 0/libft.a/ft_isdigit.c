/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:20 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/16 12:50:14 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isdigit('O'));
	printf("%d\n", ft_isdigit('w'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isdigit(' '));
	printf("%d\n", ft_isdigit('@'));
	printf("%d\n", ft_isdigit('	'));
	return (0);
}
*/