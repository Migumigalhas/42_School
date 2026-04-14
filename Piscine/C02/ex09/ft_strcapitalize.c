/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 14:29:45 by miggomes          #+#    #+#             */
/*   Updated: 2026/01/29 14:29:48 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		if (i > 0
			&& !((str[i - 1] >= 48 && str[i - 1] <= 57)
				|| (str[i - 1] >= 65 && str[i - 1] <= 90)
				|| (str[i - 1] >= 97 && str[i - 1] <= 122))
			&& (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}


#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcapitalize("OBI"));
	printf("%d\n", ft_strcapitalize("wan"));
	printf("%d\n", ft_strcapitalize("42"));
	printf("%d\n", ft_strcapitalize(""));
	printf("%d\n", ft_strcapitalize("42c"));
	printf("%d\n", ft_strcapitalize("42."));
	printf("%d\n", ft_strcapitalize("c42"));
	printf("%d\n", ft_strcapitalize(".42"));
	return (0);
}

