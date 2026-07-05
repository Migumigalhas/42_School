/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pick_algorythm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:11 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:05:33 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_stack *a, t_stack *b)
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
