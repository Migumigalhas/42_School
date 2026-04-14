/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:04:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:41:14 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include <stdio.h>

int	main(void)
{
	int x, y;
	x = 5;
	y = 2;

	printf("x: %d, y: %d\n", x, y);
	ft_swap(&x, &y);
	printf("x: %d, y: %d\n", x, y);

	return (0);
}
*/
