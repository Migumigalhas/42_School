/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:27:03 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/09 12:27:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	int	i, j;
	i = 4;

	printf("Antes: %d\n", i);
	ft_recursive_power(i, 7);
	printf("Depois: %d\n", ft_recursive_power(i, 4));
	return (0);
}
*/
