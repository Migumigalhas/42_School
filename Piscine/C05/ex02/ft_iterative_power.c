/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:25:23 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/09 12:25:28 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;

	if ((nb == 0) || (nb == 1))
		return (1);
	if (power < 0)
		return (0);
	i = 1;
	while (power >= 1)
	{
		i = i * nb;
		power--;
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
	j = ft_iterative_power(i, 8);
	printf("Depois: %d\n", j);
	return (0);
}
*/
