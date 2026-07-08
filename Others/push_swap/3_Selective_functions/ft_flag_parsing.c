/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:07 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 19:27:19 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strategy(char **argv, t_stack *a, t_stack *b)
{
	if (ft_strcmp(argv[1], "--simple") == 0)
	{
		a->bench->benching = "Selection Sort / O(n²)";
		selection_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--medium") == 0)
	{
		a->bench->benching = "Chunk Sort / O(n √n)";
		chunk_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--complex") == 0)
	{
		a->bench->benching = "Radix Sort / O(n log n)";
		radix_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--adaptive") == 0)
	{
		a->bench->benching = "Adaptive";
		adaptive(a, b);
	}
	else
		error_exit(a, b);
}


void	flag_parsing(char **argv, t_stack *a, t_stack *b)
{
	if (!argv || !argv[1])
	{
		adaptive(a, b);
		return ;
	}
	a->bench->initial_disorder = compute_disorder(a);
	
	if (ft_strcmp(argv[1], "--bench") == 0)
	{
		a->bench->is_active = 1;
		a->bench->benching = "Adaptive";
		adaptive(a, b);
	}
	else
		strategy(argv, a, b);
}

/* void	flag_parsing(char **argv, t_stack *a, t_stack *b)
{
	a->bench->initial_disorder = compute_disorder(a);
	
	if (ft_strcmp(argv[1], "--bench") == 0)
	{
		a->bench->is_active = 1;
		adaptive(a, b);
	}
	if (!(argv[1][0] == '-' && argv[1][1] == '-'))
		adaptive(a, b);
	else if (ft_strcmp(argv[1], "--simple") == 0)
	{
		a->bench->benching = "Selection Sort / O(n²)";
		selection_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--medium") == 0)
	{
		a->bench->benching = "Chunk Sort / O(n √n)";
		chunk_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--complex") == 0)
	{
		a->bench->benching = "Radix Sort / O(n log n)";
		radix_sort(a, b);
	}
	else if (ft_strcmp(argv[1], "--adaptive") == 0)
		adaptive(a, b);
	else
		error_exit(a, b);
} */
