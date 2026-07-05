/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_algorythms_2.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:31:28 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 18:37:29 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

//	FIXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

void	pull_back(t_stack *a, t_stack *b)
{
	while (b->size > 0)
	{
		max_to_top(b);
		pa(a, b);
	}
}
