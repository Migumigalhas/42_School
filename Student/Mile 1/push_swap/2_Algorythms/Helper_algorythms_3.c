/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_algorythms_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:31:32 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 18:37:13 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Just gets the value of max

int	find_max(t_stack *a)
{
	t_node	*current;
	int		max;

	current = a->top;
	max = current->value;
	while (current)
	{
		if (current->value > max)
			max = current->value;
		current = current->next;
	}
	return (max);
}

//	Just finds the number position on the node of the highest number

int	find_max_pos(t_stack *a)
{
	t_node	*current;
	int		max;
	int		pos;
	int		max_pos;

	current = a->top;
	max = find_max(a);
	pos = 0;
	max_pos = 0;
	while (current)
	{
		if (current->value == max)
			max_pos = pos;
		pos++;
		current = current->next;
	}
	return (max_pos);
}

void	max_to_top(t_stack *a)
{
	int	pos;
	int	max;

	pos = find_max_pos(a);
	max = find_max(a);
	while (a->top->value != max)
	{
		if (pos <= a->size / 2)
			ra(a);
		else
			rra(a);
	}
}

//	FIXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

int	in_chunk(int value, int chunk, int chunk_size, int size)
{
	return (value >= chunk * chunk_size && (value < (chunk + 1) * chunk_size
			|| (chunk + 1) * chunk_size >= size));
}

void	push_chunk(t_stack *a, t_stack *b, int chunk, int chunk_size)
{
	int	size;
	int	pushed;

	size = a->size + b->size;
	pushed = 0;
	while (pushed < chunk_size && a->size > 0)
	{
		if (in_chunk(a->top->value, chunk, chunk_size, size))
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
	}
}
