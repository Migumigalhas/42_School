/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:00:29 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/14 14:53:34 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fake_puthex(unsigned long nb, char str)
{
	char	c;
	char	*base;
	int		count;

	count = 0;
	if (str == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (nb > 15)
		count += fake_puthex(nb / 16, str);
	c = base[nb % 16];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_putptr(void *ptr)
{
	unsigned long	i;
	int				count;
	int				c;

	count = 2;
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = (unsigned long)ptr;
	c = fake_puthex(i, 'x');
	count = count + c;
	return (count);
}
