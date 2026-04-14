/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:31:54 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 13:42:41 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		i++;
		size--;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	int tab[] = {1, 2, 3, 4, 5};
	int i;
	int size;

	size = 5;
	i = 0;

	printf("Array original: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	printf("Array invertido: ");
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/		
