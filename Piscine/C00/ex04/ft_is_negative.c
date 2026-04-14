/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:03:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:39:59 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}

/*
int	main(void)
{
	ft_is_negative(5);
	ft_is_negative(-7);
	ft_is_negative(0);
	
	return (0);
}
*/
