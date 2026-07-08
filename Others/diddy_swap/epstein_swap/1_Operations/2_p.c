/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_p.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:27 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:36:38 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return ;
	push(a, pop(b));
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return ;
	push(b, pop(a));
	write(1, "pb\n", 3);
}
