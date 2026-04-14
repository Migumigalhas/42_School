/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:46:38 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:46:39 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	c;

	c = 0;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

#include <stdio.h>

int main(void)
{
	ft_putnbr(-4);
	printf("\n");
	ft_putnbr(+84);
	printf("\n");
	ft_putnbr(94);
	printf("\n");
	ft_putnbr(4);
	printf("\n");
	return (0);
}
