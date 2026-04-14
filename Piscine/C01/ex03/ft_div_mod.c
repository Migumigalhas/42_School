/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:04:36 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:41:33 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 10;
	b = 4;
	ft_div_mod(a, b, &div, &mod);
	
	printf(1, &a, 1);
	printf(1, &b, 1);
	return (0);
}
*/
