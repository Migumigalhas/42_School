/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 12:00:32 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/14 12:47:43 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

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
	if (nb > 9)
		count += ft_puthex(nb / 16, str);
	c = base[nb % 16];
	write(1, &c, 1);
	count++;
	return (count);
}
