/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:18 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 15:59:44 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] >= 0 && str[i] <= 122)
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
	printf("%d\n", ft_isascii("OBI"));
	printf("%d\n", ft_isascii("wan"));
	printf("%d\n", ft_isascii("42"));
	printf("%d\n", ft_isascii(""));
	printf("%d\n", ft_isascii("42c"));
	printf("%d\n", ft_isascii("42."));
	printf("%d\n", ft_isascii("ñc42"));
	printf("%d\n", ft_isascii(".42"));
	return (0);
}
*/