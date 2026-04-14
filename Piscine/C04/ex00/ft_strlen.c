/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 11:03:40 by miggomes          #+#    #+#             */
/*   Updated: 2026/02/03 11:03:42 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Tamanho da String";
	printf("Tamanho da String: %d", ft_strlen(str));
	return (0);
}
*/
