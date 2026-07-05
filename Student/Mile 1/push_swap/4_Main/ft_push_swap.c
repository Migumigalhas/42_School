/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:26 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:04:58 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		i;
	int		start;

	if (argc < 2)
		return (0);
	init_stack(&a);
	init_stack(&b);
	start = 1;
	if (argv[1][0] == '-' && argv[1][1] == '-')
		start = 2;
	i = argc - 1;
	while (i >= start)
	{
		validate(argv, i, &a, &b);
		i--;
	}
	if (!sort_check(&a))
		flag_parsing(argv, &a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
