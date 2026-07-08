/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putfloat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 18:18:36 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 19:00:19 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_putfloat(float n)
{
	long long 	total;
	long long 	left_side;
	long long 	right_side;
	int 		count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	total = (long long)(n * 100);
	left_side = total / 100;
	right_side = total % 100;
	count += ft_putnbr(left_side);
	count += ft_putchar('.');
	if (right_side < 10)
		ft_putchar('0');
	count += ft_putnbr(right_side);
	return (count);
}