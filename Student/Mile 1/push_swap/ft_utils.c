/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:52:26 by miggomes          #+#    #+#             */
/*   Updated: 2026/06/24 16:28:37 by miggomes         ###   ########.fr       */
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

void	sa(t_stack *a)
{
	s_helper(a);
	ft_printf("sa\n");
}

void	sb(t_stack *b)
{
	s_helper(b);
	ft_printf("sb\n");
}

void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return ;
	push(a, pop(b));
	ft_printf("pa\n");
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return ;
	push(b, pop(a));
	ft_printf("pb\n");
}

void	ra(t_stack *a)
{
	r_helper(a);
	ft_printf("ra\n");
}

void	rb(t_stack *b)
{
	r_helper(b);
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b)
{
	r_helper(a);
	r_helper(b);
	ft_printf("rr\n");
}

void	rra(t_stack *a)
{
	rr_helper(a);
	ft_printf("rra\n");
}

void	rrb(t_stack *b)
{
	rr_helper(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b)
{
	rr_helper(a);
	rr_helper(b);
	ft_printf("rrr\n");
}
