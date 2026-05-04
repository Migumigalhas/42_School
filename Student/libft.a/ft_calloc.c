/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:14 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:14:30 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	unsigned char	*tmp;

	if (size != 0 && number > ((size_t)-1) / size)
		return (NULL);
	tmp = malloc(size * number);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * number);
	return ((void *)tmp);
}
