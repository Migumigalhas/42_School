/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_main_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:18 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 17:07:10 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//	Convert str to long using matol
//	ft_matoi cheacks if it is an valid integer,
//	n... if is outside the int range, and ft_dup if is dupped
//	Type cast long into int ..., (int)n))
//	If all passed push back to a

int	validate(char *str, t_stack *a)
{
	long	n;

	if (!str || !ft_matoi(str))
		return (0);
	n = ft_matol(str);
	if (n > 2147483647 || n < -2147483648 || ft_duplicate(a, (int)n))
		return (0);
	push(a, (int)n);
	return (1);
}

// Start in the top of the node
// Increment until we find 2 similar values
// value = 5
// stack: [3] → [1] → [4] → NULL

// current = [3] → 3 == 5? NO
// current = [1] → 1 == 5? NO
// current = [4] → 4 == 5? NO
// current = NULL → loop ends
// return (0)  no duplicate!

int	ft_duplicate(t_stack *a, int value)
{
	t_node	*current;

	current = a->top;
	while (current)
	{
		if (current->value == value)
			return (1);
		current = current->next;
	}
	return (0);
}

//	If stack = null, 0, 1 ordenada, retorna 1
// 	while current->next != \0 ++,
//	Compare values and go to next node

int	sort_check(t_stack *a)
{
	t_node	*current;

	if (!a || !a->top || !a->top->next)
		return (1);
	current = a->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
