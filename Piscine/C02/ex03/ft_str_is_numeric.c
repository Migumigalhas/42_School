/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:23:51 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/29 11:23:54 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_str_is_numeric("OBI"));
	printf("%d\n", ft_str_is_numeric("wan"));
	printf("%d\n", ft_str_is_numeric("42"));
	printf("%d\n", ft_str_is_numeric(""));
	printf("%d\n", ft_str_is_numeric("42 c"));
	printf("%d\n", ft_str_is_numeric("42 ."));
	printf("%d\n", ft_str_is_numeric("c 42"));
	printf("%d\n", ft_str_is_numeric(". 42"));
	return (0);
}
*/
