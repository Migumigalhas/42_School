/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_Radix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:30:05 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:36:55 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Radix sort - O(n log n)

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bits;
	int	bit;
	int	i;
	int	size;

	assign_ranks(a);
	size = a->size;
	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	bit = 0;
	while (bit < bits)
	{
		i = size;
		while (i--)
		{
			if ((a->top->value >> bit) & 1)
				pb(a, b);
			else
				ra(a);
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
}
