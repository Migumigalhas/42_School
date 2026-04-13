/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:20 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 15:44:19 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d\n", ft_isdigit("OBI"));
	printf("%d\n", ft_isdigit("wan"));
	printf("%d\n", ft_isdigit("42"));
	printf("%d\n", ft_isdigit(""));
	printf("%d\n", ft_isdigit("42c"));
	printf("%d\n", ft_isdigit("42."));
	printf("%d\n", ft_isdigit("c42"));
	printf("%d\n", ft_isdigit(".42"));
	return (0);
}
*/