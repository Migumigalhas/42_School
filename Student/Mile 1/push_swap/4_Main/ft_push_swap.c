/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:26 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/09 14:26:28 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_arguments(int argc, char **argv, t_stack *a, t_stack *b)
{
	int	i;
	int	start;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0')
			exit(0);
		i++;
	}
	start = 1;
	if (argv[1][0] == '-' && argv[1][1] == '-')
		start = 2;
	i = argc - 1;
	while (i >= start)
	{
		validate(argv, i, a, b);
		i--;
	}
}

int	main(int argc, char **argv)
{
	t_stack		a;
	t_stack		b;
	t_benchmark	bench;

	if (argc < 2)
		return (0);
	init_stack(&a);
	init_stack(&b);
	ft_memset(&bench, 0, sizeof(t_benchmark));
	a.bench = &bench;
	b.bench = &bench;
	parse_arguments(argc, argv, &a, &b);
	if (!sort_check(&a))
	{
		flag_parsing(argv, &a, &b);
		benchmark_print(&bench);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}
