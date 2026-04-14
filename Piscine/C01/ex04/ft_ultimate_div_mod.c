/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:39:44 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:41:47 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}

/*
#include <stdio.h>

int	main(void)
{
	int	x, y;
	x = 23;
	y = 6;

	printf("Div: %d, Mod: %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("Div: %d, Mod: %d", x, y);

	return (0);
}
*/
