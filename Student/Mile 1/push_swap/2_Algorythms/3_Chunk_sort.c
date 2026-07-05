/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_Chunk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:29:10 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 18:37:49 by miggomes         ###   ########.fr       */
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

//FIXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void	chunk_sort(t_stack *a, t_stack *b)
{
	int	chunk_size;
	int	chunk;
	int	size;

	assign_ranks(a);
	size = a->size;
	chunk_size = a->size / 5;
	if (chunk_size == 0)
		chunk_size = 1;
	chunk = 0;
	while (a->size > 0)
	{
		push_chunk(a, b, chunk, chunk_size);
		chunk++;
	}
	while (b->size > 0)
	{
		max_to_top(b);
		pa(a, b);
	}
}
