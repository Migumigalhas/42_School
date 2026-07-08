/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:26:56 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:28:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Selection sort - O(n²) algorithm

void	selection_sort(t_stack *a, t_stack *b)
{
	if (a->size <= 1)
		return ;
	if (a->size == 2)
	{
		sort_two(a);
		return ;
	}
	while (a->size > 3)
	{
		min_to_top_new(a);
		pb(a, b);
	}
	sort_three(a);
	while (b->top != NULL)
		pa(a, b);
}
