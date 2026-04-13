/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:17 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 15:37:46 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	printf("%d\n", ft_isalpha("OBI"));
	printf("%d\n", ft_isalpha("wan"));
	printf("%d\n", ft_isalpha("42"));
	printf("%d\n", ft_isalpha(""));
	printf("%d\n", ft_isalpha("42c"));
	printf("%d\n", ft_isalpha("42."));
	printf("%d\n", ft_isalpha("c42"));
	printf("%d\n", ft_isalpha(".42"));
	return (0);
}
*/