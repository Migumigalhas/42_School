/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_Chunk_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:29:10 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 16:00:46 by miggomes         ###   ########.fr       */
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

void	chunk_sort(t_stack *a, t_stack *b)
{
	int	total_size;
	int	chunks;
	int	chunk_size;
	int	i;

	assign_ranks(a);
	total_size = a->size;
	chunks = get_chunk_count(total_size);
	chunk_size = total_size / chunks;
	if (chunk_size == 0)
		chunk_size = 1;
	i = 0;
	while (a->size > 0)
	{
		if (a->top->value <= i)
		{
			pb(a, b);
			i++;
		}
		else if (a->top->value <= i + chunk_size)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
	pull_back(a, b);
}
