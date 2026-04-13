/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:15 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 15:59:27 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
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
	printf("%d\n", ft_isalnum("OBI"));
	printf("%d\n", ft_isalnum("wan"));
	printf("%d\n", ft_isalnum("42"));
	printf("%d\n", ft_isalnum(""));
	printf("%d\n", ft_isalnum("42c"));
	printf("%d\n", ft_isalnum("42."));
	printf("%d\n", ft_isalnum("c42"));
	printf("%d\n", ft_isalnum(".42"));
	return (0);
}
*/