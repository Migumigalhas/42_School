/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:26:17 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/29 12:26:20 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	printf("%d\n", ft_str_is_lowercase("OBI"));
	printf("%d\n", ft_str_is_lowercase("wan"));
	printf("%d\n", ft_str_is_lowercase("42"));
	printf("%d\n", ft_str_is_lowercase(""));
	printf("%d\n", ft_str_is_lowercase("42c"));
	printf("%d\n", ft_str_is_lowercase("42."));
	printf("%d\n", ft_str_is_lowercase("c42"));
	printf("%d\n", ft_str_is_lowercase(".42"));
	return (0);
}
*/
