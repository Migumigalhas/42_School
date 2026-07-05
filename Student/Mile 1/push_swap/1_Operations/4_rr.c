/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   4_rr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:30 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:17:06 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	rr_helper(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rr_helper(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rr_helper(a);
	rr_helper(b);
	write(1, "rrr\n", 4);
}
