/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:38 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/25 14:12:21 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	size_t	i;
	
	tmp = lst;
	i = 0;
	while (tmp != '\0')
	{
		tmp = tmp -> next;
		i++;
	}
	return (i);
}
