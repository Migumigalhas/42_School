/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_algorythms_3.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:31:32 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 15:59:38 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Just gets the value of max

int	find_max(t_stack *a)
{
	t_node	*current;
	int		max;

	if (!a || !a->top)
		return (0);
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

	if (!a || !a->top)
		return (0);
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

void	max_to_top(t_stack *b)
{
	int	pos;
	int	max;

	if (!b || !b->top)
		return ;
	pos = find_max_pos(b);
	max = find_max(b);
	while (b->top->value != max)
	{
		if (pos <= b->size / 2)
			rb(b);
		else
			rrb(b);
	}
}
