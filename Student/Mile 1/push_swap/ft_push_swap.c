/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:26 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/25 12:28:33 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack a;
	t_stack b;
	long n;
	int i;

	if (argc < 2)
		return (0);
	init_stack(&a);
	init_stack(&b);
	i = 1;
	while (i < argc)
	{
		if (!ft_matoi(argv[i]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		n = ft_matol(argv[i]);
		if (n > 2147483647 || n < -2147483648)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		push(&a,(int)n);
		i++;
	}
}