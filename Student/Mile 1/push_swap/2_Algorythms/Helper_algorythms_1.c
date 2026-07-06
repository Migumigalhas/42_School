/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_algorythms_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:25:34 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 15:32:09 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Get the value of the min

int	find_min(t_stack *a)
{
	t_node	*current;
	int		min;

	current = a->top;
	min = current->value;
	while (current)
	{
		if (current->value < min)
			min = current->value;
		current = current->next;
	}
	return (min);
}

// keep rotating until min is at top

void	min_to_top(t_stack *a)
{
	int	min;

	min = find_min(a);
	while (a->top->value != min)
		ra(a);
}

//ra min is in top half, rotate forward
//rra min is in bottom half, rotate backward

int	find_min_pos(t_stack *a)
{
	t_node	*current;
	int		min;
	int		pos;
	int		min_pos;

	current = a->top;
	min = find_min(a);
	pos = 0;
	min_pos = 0;
	while (current)
	{
		if (current->value == min)
			min_pos = pos;
		pos++;
		current = current->next;
	}
	return (min_pos);
}

void	min_to_top_new(t_stack *a)
{
	int	pos;
	int	min;

	pos = find_min_pos(a);
	min = find_min(a);
	while (a->top->value != min)
	{
		if (pos <= a->size / 2)
			ra(a);
		else
			rra(a);
	}
}

void	restore_values(t_stack *a, int *original, int size)
{
	t_node	*current;

	sort_array(original, size);
	current = a->top;
	while (current)
	{
		current->value = original[current->value];
		current = current->next;
	}
}
