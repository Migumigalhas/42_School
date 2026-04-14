/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:26:01 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/29 12:26:04 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	printf("%d\n", ft_str_is_uppercase("OBI"));
	printf("%d\n", ft_str_is_uppercase("wan"));
	printf("%d\n", ft_str_is_uppercase("42"));
	printf("%d\n", ft_str_is_uppercase(""));
	printf("%d\n", ft_str_is_uppercase("42c"));
	printf("%d\n", ft_str_is_uppercase("42."));
	printf("%d\n", ft_str_is_uppercase("c42"));
	printf("%d\n", ft_str_is_uppercase(".42"));
	return (0);
}
*/
