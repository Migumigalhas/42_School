/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:48:21 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/20 17:51:54 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char *str;
	size_t i;
	
	str = (char *)s;
	i = 0;
	while (i < len && i > start)
	{
		
	
	
	return (s);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Imprime so o que eu pedir";
	char *res;
	res = ft_substr(str, 5, 15);
	printf("--> %s\n", res);
	return (0);
}



/* char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    char    *sub;
    size_t  i;
    size_t  slen;

    if (!s)
        return (NULL);
    slen = ft_strlen(s);
    if (start >= slen)          // se start for além da string
        return (ft_strdup(""));  // devolve string vazia
    if (slen - start < len)     // se não houver len caracteres disponíveis
        len = slen - start;     // ajusta o len
    sub = malloc(len + 1);      // aloca memória para a substring
    if (!sub)
        return (NULL);
    i = 0;
    while (i < len)
    {
        sub[i] = s[start + i];  // copia a partir de start
        i++;
    }
    sub[i] = '\0';              // termina a string!
    return (sub);
} */