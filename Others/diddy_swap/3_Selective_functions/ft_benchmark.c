/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_benchmark.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 16:39:58 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 17:21:10 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	benchmark_print(t_benchmark *b)
{
	int	total;
	
	if (!b || !b->is_active)
		return ;
	total = b->sa + b->sb + b->ss + b->pa + b->pb
			+ b->ra + b->rb + b->rr + b->rra + b->rrb + b->rrr;
   	ft_printf("\n");
	ft_printf("||||||||||||||||||||||||||||||||||||||||||||||||||\n");
   	ft_printf("\n");
	ft_printf("[bench] disorder:  %d\n", b->initial_disorder * 100);
    ft_printf("[bench] strategy:  %s\n", b->benching);
    ft_printf("[bench] total_ops: %d\n", total);
    ft_printf("[bench] sa: %d  sb: %d  ss: %d\n", b->sa, b->sb, b->ss);
    ft_printf("[bench] pa: %d  pb: %d\n", b->pa, b->pb);
    ft_printf("[bench] ra: %d  rb: %d  rr: %d\n", b->ra, b->rb, b->rr);
    ft_printf("[bench] rra: %d rrb: %d rrr: %d\n", b->rra, b->rrb, b->rrr);
}