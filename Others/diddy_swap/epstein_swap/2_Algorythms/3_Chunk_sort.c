/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_Chunk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:29:10 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 16:27:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Chunk sort - O(n√n) algorithm
//	Replaces all values for ranks
//	BEFORE: [67] → [3] → [87] → [23]
//	AFTER:  [2]  → [0] → [3]  → [1]
//	chunck_size /5 cause the most optimal for 100/500 numbers
//	Push all to B
//	Checks if belongs to current chunk if yes psuh to b
//	IF nojust ra, put in the final
//	Go to next chunk
//	Push largest number first back from b to , so it ends sorted

static int	get_chunk_count(int size)
{
	if (size <= 20)
		return (2);
	if (size <= 100)
		return (5);
	return (11);
}

static int	calc_chunk_size(int size)
{
	int	chunks;

	chunks = get_chunk_count(size);
	if (size / chunks == 0)
		return (1);
	return (size / chunks);
}

void	chunk_sort(t_stack *a, t_stack *b)
{
	int	chunk_size;
	int	i;

	assign_ranks(a);
	chunk_size = calc_chunk_size(a->size);
	i = 0;
	while (a->size > 0)
	{
		if (a->top->value <= i++)
			pb(a, b);
		else if (a->top->value <= (i - 1) + chunk_size)
		{
			pb(a, b);
			rb(b);
		}
		else
		{
			ra(a);
			i--;
		}
	}
	pull_back(a, b);
}
