/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_Manual_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:22:39 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:36:48 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// min_to_top cause it alredy has find_min init,
// pa and pb to push to b the 2 lowest numbers

void	sort_five(t_stack *a, t_stack *b)
{
	if (a->size == 4)
	{
		min_to_top(a);
		pb(a, b);
		sort_three(a);
		pa(a, b);
	}
	else
	{
		min_to_top(a);
		pb(a, b);
		min_to_top(a);
		pb(a, b);
		sort_three(a);
		pa(a, b);
		pa(a, b);
	}
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
