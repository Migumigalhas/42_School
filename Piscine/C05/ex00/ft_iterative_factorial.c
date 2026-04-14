/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:13:33 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/04 12:13:35 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	while (nb >= 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	
	i = 7;
	printf("Antes: %d\n", i);
	j = ft_iterative_factorial(i);
	printf("Depois: %d\n", j);
	return (0);
}
*/
