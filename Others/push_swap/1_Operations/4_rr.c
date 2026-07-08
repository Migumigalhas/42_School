/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:30 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 18:54:27 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	rr_helper(a);
	if (a->bench && a->bench->is_active)
        a->bench->rra++;
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rr_helper(b);
	if (b->bench && b->bench->is_active)
        b->bench->rrb++;
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rr_helper(a);
	rr_helper(b);
	if (a->bench && a->bench->is_active)
        a->bench->rrr++;
	write(1, "rrr\n", 4);
}
