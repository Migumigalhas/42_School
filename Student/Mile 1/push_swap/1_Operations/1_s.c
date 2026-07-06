/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_s.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/05 17:15:25 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/06 15:12:55 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	s_helper(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	s_helper(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	s_helper(a);
	s_helper(b);
	write(1, "ss\n", 3);
}
