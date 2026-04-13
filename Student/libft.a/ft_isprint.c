/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:22 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/13 16:02:20 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_isprint("OBI"));
	printf("%d\n", ft_isprint("wan"));
	printf("%d\n", ft_isprint("42"));
	printf("%d\n", ft_isprint(""));
	printf("%d\n", ft_isprint("42c"));
	printf("%d\n", ft_isprint("42."));
	printf("%d\n", ft_isprint("c42"));
	printf("%d\n", ft_isprint(".42"));
	return (0);
}
*/