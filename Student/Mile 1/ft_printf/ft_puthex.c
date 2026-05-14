/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:00:32 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/14 14:53:00 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char str)
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
		count += ft_puthex(nb / 16, str);
	c = base[nb % 16];
	write(1, &c, 1);
	count++;
	return (count);
}
