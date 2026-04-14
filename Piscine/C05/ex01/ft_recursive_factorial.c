/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:30:33 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/04 15:30:36 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	i;

	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	if (nb >= 1)
	{
		i = i * nb * ft_recursive_factorial(nb - 1);
	}
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	
	i = 6;
	printf("Antes: %d\n", i);
	j = ft_recursive_factorial(i);
	printf("Antes: %d\n", j);
	return (0);
}
*/
