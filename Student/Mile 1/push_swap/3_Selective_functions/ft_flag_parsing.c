/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:07 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 19:49:31 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_strategy(char *flag, t_stack *a, t_stack *b)
{
	if (ft_strcmp(flag, "--simple") == 0)
	{
		a->bench->benching = "Selection Sort / O(n²)";
		selection_sort(a, b);
	}
	else if (ft_strcmp(flag, "--medium") == 0)
	{
		a->bench->benching = "Chunk Sort / O(n √n)";
		chunk_sort(a, b);
	}
	else if (ft_strcmp(flag, "--complex") == 0)
	{
		a->bench->benching = "Radix Sort / O(n log n)";
		radix_sort(a, b);
	}
	else if (ft_strcmp(flag, "--adaptive") == 0)
		adaptive(a, b);
	else
		error_exit(a, b);
}

void	flag_parsing(char **argv, t_stack *a, t_stack *b)
{
	a->bench->initial_disorder = compute_disorder(a);
	if (ft_strcmp(argv[1], "--bench") == 0)
	{
		a->bench->is_active = 1;
		adaptive(a, b);
	}
	else if (!(argv[1][0] == '-' && argv[1][1] == '-'))
		adaptive(a, b);
	else
		set_strategy(argv[1], a, b);
}
