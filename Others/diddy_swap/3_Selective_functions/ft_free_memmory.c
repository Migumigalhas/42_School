/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_memmory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:09 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:05:56 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *a)
{
	t_node	*current;
	t_node	*next;

	current = a->top;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	a->top = NULL;
	a->size = 0;
}

void	error_exit(t_stack *a, t_stack *b)
{
	free_stack(a);
	free_stack(b);
	write(2, "Error\n", 6);
	exit(1);
}

void	init_stack(t_stack *s)
{
	s->top = NULL;
	s->size = 0;
}
