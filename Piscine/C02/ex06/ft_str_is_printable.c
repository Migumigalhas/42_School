/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 12:30:40 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/29 12:30:42 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 127)
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
	printf("%d\n", ft_str_is_printable("OBI"));
	printf("%d\n", ft_str_is_printable("wan"));
	printf("%d\n", ft_str_is_printable("42"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("42 c"));
	printf("%d\n", ft_str_is_printable("42."));
	printf("%d\n", ft_str_is_printable("c 	3 4542"));
	printf("%d\n", ft_str_is_printable(". 	42"));
	printf("%d\n", ft_str_is_printable("   			"));
	return (0);
}
*/
