/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:49 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/25 11:46:48 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	c;

	if (n == "-2147483648")
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			c = n + 48;
			write(1, &c, 1);
		}
	}
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_fd(-4, 1);
	printf("\n");
	ft_putnbr_fd(+84, 1);
	printf("\n");
	ft_putnbr_fd(94, 1);
	printf("\n");
	ft_putnbr_fd(4, 1);
	printf("\n");
	return (0);
}
*/