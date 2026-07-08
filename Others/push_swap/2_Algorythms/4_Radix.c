/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_Radix.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:30:05 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 16:27:00 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Radix sort - O(n log n)

#include "push_swap.h"

static int	get_max_bits(int size)
{
	int	bits;

	bits = 0;
	while ((size - 1) >> bits)
		bits++;
	return (bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bits;
	int	bit;
	int	i;
	int	*original;

	original = get_values(a);
	assign_ranks(a);
	bits = get_max_bits(a->size);
	bit = 0;
	while (bit < bits)
	{
		i = a->size;
		while (i--)
		{
			if ((a->top->value >> bit) & 1)
				ra(a);
			else
				pb(a, b);
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
	restore_values(a, original, a->size);
	free(original);
}
