/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:14 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/14 18:17:56 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*calloc(size_t number, size_t size)
{
	unsigned char *tmp;

	tmp = malloc(size * number);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * number);
	return ((void *)tmp);
}