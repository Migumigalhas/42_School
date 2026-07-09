/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_algorythm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:11 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 19:44:08 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_small(t_stack *a, t_stack *b)
{
	a->bench->benching = "Manual Sort";
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
	else
		sort_five(a, b);
}

static void	sort_large(t_stack *a, t_stack *b, float disorder)
{
	if (disorder < 0.2)
	{
		a->bench->benching = "Selection Sort / O(n²)";
		selection_sort(a, b);
	}
	else if (disorder < 0.5)
	{
		a->bench->benching = "Chunk Sort / O(n √n)";
		chunk_sort(a, b);
	}
	else
	{
		a->bench->benching = "Radix Sort / O(n log n)";
		radix_sort(a, b);
	}
}

void	adaptive(t_stack *a, t_stack *b)
{
	if (a->size <= 5)
		sort_small(a, b);
	else
		sort_large(a, b, compute_disorder(a));
}

/* void	adaptive(t_stack *a, t_stack *b)
{
	float	disorder;

	if (a->size <= 2)
	{
		if (a->size == 2)
			sort_two(a);
		return ;
	}
	if (a->size == 3)
	{
		sort_three(a);
		return ;
	}
	if (a->size == 4 || a->size <= 5)
	{
		sort_five(a, b);
		return ;
	}
	disorder = compute_disorder(a);
	if (disorder < 0.2)
		selection_sort(a, b);
	else if (disorder < 0.5)
		chunk_sort(a, b);
	else
		radix_sort(a, b);
}
 */
