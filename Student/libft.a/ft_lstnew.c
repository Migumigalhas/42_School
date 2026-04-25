/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:36 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/25 13:58:23 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *l1;

	l1 = malloc(sizeof(t_list));
	if (!l1)
		return (NULL);
	l1 -> content = content;
	l1 -> next = NULL;
	return (l1);
}
