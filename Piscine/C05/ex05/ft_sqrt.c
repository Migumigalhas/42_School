/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 16:39:00 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/16 16:39:01 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i * i <= nb && i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_sqrt(16));
	printf("%i\n", ft_sqrt(5));
	printf("%i\n", ft_sqrt(44));
	return (0);
}
*/
