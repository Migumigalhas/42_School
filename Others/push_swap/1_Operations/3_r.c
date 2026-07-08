/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_r.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:28 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 18:54:35 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	r_helper(a);
	if (a->bench && a->bench->is_active)
        a->bench->ra++;
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	r_helper(b);
	if (b->bench && b->bench->is_active)
        b->bench->rb++;
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	r_helper(a);
	r_helper(b);
	if (a->bench && a->bench->is_active)
        a->bench->rr++;
	write(1, "rr\n", 3);
}
