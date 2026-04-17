/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:50:31 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/17 15:01:02 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const char *str;

	i = 0;
	str = (const char *)s;
	while (i < n)
	{
		if (str[i] == (const char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}