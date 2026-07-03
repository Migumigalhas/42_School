/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algorithm.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/03 16:20:14 by miggomes         ###   ########.fr       */
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
//	Size to not hit /0, just swap if 1 > i+1

void	sort_array(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while (j < size - 1)
	{
		i = 0;
		while (i < size - j - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i + 1];
				array[i + 1] = array[i];
				array[i] = temp;
			}
			i++;
		}
		j++;
	}
}

//	Pass from node to array the values

int	*get_values(t_stack *a)
{
	int		*array;
	t_node	*current;
	int		i;

	array = malloc(sizeof(int) * a->size);
	if (!array)
		return (NULL);
	current = a->top;
	i = 0;
	while (current->next == NULL)
	{
		array[i] = current->value;
		current = current->next;
		i++;
	}
	return (array);
}

int	find_rank(int *sorted, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (sorted[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

//	We pass the values from node to the array *sorted
//
//	read current->value (right side) → e.g. 67
//	find its rank in sorted array → find_rank returns 2
//	write 2 back into current->value (left side)
//	BEFORE: [67] → [3] → [87] → [23]
//	AFTER:  [2]  → [0] → [3]  → [1]

void	assign_ranks(t_stack *a)
{
	t_node	*current;
	int		*sorted;
	int		i;

	sorted = get_values(a);
	sort_array(sorted, a->size);
	current = a->top;
	while (current)
	{
		current->value = find_rank(sorted, a->size, current->value);
		current = current->next;
	}
	free(sorted);
}

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

//	Replaces all values for ranks
//	BEFORE: [67] → [3] → [87] → [23]
//	AFTER:  [2]  → [0] → [3]  → [1]
//	chunck_size /5 cause the most optimal for 100/500 numbers
//	Push all to B
//	Checks if belongs to current chunk if yes psuh to b
//	IF nojust ra, put in the final
//	Go to next chunk
//	Push largest number first back from b to , so it ends sorted

void	chunk_sort(t_stack *a, t_stack *b)
{
	int	chunk_size;
	int	chunk;
	int	i;

	assign_ranks(a);
	chunk_size = a->size / 5;
	chunk = 0;
	while (a->size > 0)
	{
		i = a->size;
		while (i--)
		{
			if (a->top->value >= chunk * chunk_size
				&& a->top->value < (chunk + 1) * chunk_size)
				pb(a, b);
			else
				ra(a);
		}
		chunk++;
	}
	while (b->size > 0)
	{
		max_to_top(b);
		pa(a, b);
	}
}

//----------------------------------------------------------------------
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
