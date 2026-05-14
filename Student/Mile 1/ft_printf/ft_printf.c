/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 15:03:47 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/14 14:12:48 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_type(const char str, va_list args)
{
	if (str == '%')
		return (ft_putchar('%'));
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	if (str == 'x' || str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), str));
	if (str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			count += ft_type(format[i], args);
		}
		else
		{
			count += ft_putchar(format[i]);
			i++;
		}
	}
	va_end(args);
	return (count);
}
