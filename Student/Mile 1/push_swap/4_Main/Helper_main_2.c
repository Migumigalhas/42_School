/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Helper_main_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:50:18 by miggomes          #+#    #+#             */
/*   Updated: 2026/07/08 19:03:49 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	process_split(char **split, t_stack *a, t_stack *b)
{
	int		k;
	long	n;

	k = 0;
	while (split[k])
		k++;
	while (--k >= 0)
	{
		n = ft_matol(split[k]);
		if (!ft_matoi(split[k]) || n > 2147483647 || n < -2147483648
			|| ft_duplicate(a, (int)n))
		{
			free_split(split);
			error_exit(a, b);
		}
		push(a, (int)n);
	}
}

void	validate(char **argv, int i, t_stack *a, t_stack *b)
{
	char	**split;

	split = ft_split(argv[i], ' ');
	if (!split || !split[0])
	{
		free_split(split);
		error_exit(a, b);
	}
	process_split(split, a, b);
	free_split(split);
}

int	ft_duplicate(t_stack *a, int value)
{
	t_node	*current;

	current = a->top;
	while (current)
	{
		if (current->value == value)
			return (1);
		current = current->next;
	}
	return (0);
}

int	sort_check(t_stack *a)
{
	t_node	*current;

	if (!a || !a->top || !a->top->next)
		return (1);
	current = a->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}
