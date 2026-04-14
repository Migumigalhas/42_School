/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 13:02:54 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/09 13:02:56 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	i;

	i = 1;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Antes: %d\n", ft_fibonacci(5));
	printf("Depois: %d\n", ft_fibonacci(8));
	return (0);
}
*/
