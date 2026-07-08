/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2_p.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:27 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 18:45:02 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *a, t_stack *b)
{
	if (!b->top)
		return ;
	push(a, pop(b));
	if (a->bench && a->bench->is_active)
        a->bench->pa++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *a, t_stack *b)
{
	if (!a->top)
		return ;
	push(b, pop(a));
	if (a->bench && a->bench->is_active)
        a->bench->pb++;
	write(1, "pb\n", 3);
}
