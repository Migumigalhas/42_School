/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:26 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 17:08:25 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		i;
	int		j;
	int		start;
	char	**sub_argv;

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
		sub_argv = ft_split(argv[i], ' ');
		if (!sub_argv || !sub_argv[0])
		{
			free_matrix(sub_argv);
			error_exit(&a, &b);
		}
		j = 0;
		while (sub_argv[j])
			j++;
		j--;
		while (j >= 0)
		{
			if (!validate(sub_argv[j], &a))
			{
				free_matrix(sub_argv);
				error_exit(&a, &b);
			}
			j--;
		}
		free_matrix(sub_argv);
		i--;
	}
	if (!sort_check(&a))
		flag_parsing(argv, &a, &b);
	free_stack(&a);
	return (0);
}
