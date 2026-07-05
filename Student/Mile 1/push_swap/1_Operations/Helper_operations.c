/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:32 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:36:44 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Simple rule:
// left = where you're storing to
// right = where you're reading from

void	push(t_stack *stack, int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->value = value;
	new->next = stack->top;
	stack->top = new;
	stack->size++;
}

int	pop(t_stack *stack)
{
	t_node	*delete;
	int		value;

	delete = stack->top;
	value = delete->value;
	stack->top = delete->next;
	free(delete);
	stack->size--;
	return (value);
}

void	s_helper(t_stack *s)
{
	t_node	*first;
	t_node	*second;
	int		temp;

	if (!s->top || !s->top->next)
		return ;
	first = s->top;
	second = first->next;
	temp = first->value;
	first->value = second->value;
	second->value = temp;
}

void	r_helper(t_stack *r)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (!r->top || !r->top->next)
		return ;
	first = r->top;
	second = r->top;
	last = r->top;
	second = first->next;
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	first->next = NULL;
	r->top = second;
}

void	rr_helper(t_stack *rr)
{
	t_node	*first;
	t_node	*last;
	t_node	*beforelast;

	if (!rr->top || !rr->top->next)
		return ;
	first = rr->top;
	last = rr->top;
	beforelast = rr->top;
	while (last->next != NULL)
		last = last->next;
	while (beforelast->next->next != NULL)
		beforelast = beforelast->next;
	last->next = first;
	rr->top = last;
	beforelast->next = NULL;
}
