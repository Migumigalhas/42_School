/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 13:15:36 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:42:56 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {5, 34, 3, -5, 6};
	int i;
	int size;

	size = 5;
	i = 0;

	printf("Antes: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab, size);

	i = 0;
	printf("Depois: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
