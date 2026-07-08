/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:07 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:01:05 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag_parsing(char **argv, t_stack *a, t_stack *b)
{
	if (!(argv[1][0] == '-' && argv[1][1] == '-'))
		adaptive(a, b);
	else if (ft_strcmp(argv[1], "--simple") == 0)
		selection_sort(a, b);
	else if (ft_strcmp(argv[1], "--medium") == 0)
		chunk_sort(a, b);
	else if (ft_strcmp(argv[1], "--complex") == 0)
		radix_sort(a, b);
	else if (ft_strcmp(argv[1], "--adaptive") == 0)
		adaptive(a, b);
	else
	{
		write (2, "Error\n", 6);
		exit(1);
	}
}
