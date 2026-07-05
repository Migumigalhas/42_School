/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_disorder_measure.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:24:00 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/05 17:00:21 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_stack *a)
{
	int	i;
	int	j;
	int	mistakes;
	int	total_pairs;
	int	*array;

	array = get_values(a);
	i = 0;
	mistakes = 0;
	total_pairs = 0;
	while (i < a->size)
	{
		j = i + 1;
		while (j < a->size)
		{
			total_pairs++;
			if (array[i] > array[j])
				mistakes++;
			j++;
		}
		i++;
	}
	free(array);
	return ((float)mistakes / total_pairs);
}
