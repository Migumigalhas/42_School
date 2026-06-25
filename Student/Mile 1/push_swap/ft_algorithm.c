/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/25 16:11:54 by miggomes         ###   ########.fr       */
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

// min_to_top cause it alredy has find_min init,
// pa and pb to push to b the 2 lowest numbers

void	sort_five(t_stack *a, t_stack *b)
{
	min_to_top(a);
	pb(a, b);
	min_to_top(a);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
}

// [1,2,3] → nothing
// [1,3,2] → rra + sa
// [2,1,3] → sa
// [2,3,1] → rra
// [3,1,2] → ra
// [3,2,1] → sa + rra

void	sort_three(t_stack *a)
{
	int	first;
	int	second;
	int	third;

	first = a->top->value;
	second = a->top->next->value;
	third = a->top->next->next->value;
	if (first < second && second < third)
		return ;
	else if (first < second && second > third && first < third)
	{
		rra(a);
		sa(a);
	}
	else if (first > second && second < third && first < third)
		sa(a);
	else if (first < second && second > third && first > third)
		rra(a);
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first > second && second > third)
	{
		sa(a);
		rra(a);
	}
}

void	sort_two(t_stack *a)
{
	int	first;
	int	second;

	first = a->top->value;
	second = a->top->next->value;
	if (first < second)
		return ;
	if (first > second)
		sa(a);
}

//----------------------------------------------------------------------
//	Selection sort - O(n²) algorithm

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

//----------------------------------------------------------------------
//	Chunk sort - O(n√n) algorithm
