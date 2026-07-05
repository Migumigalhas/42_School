/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_r.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:28 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:36:40 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	r_helper(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	r_helper(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	r_helper(a);
	r_helper(b);
	write(1, "rr\n", 3);
}
