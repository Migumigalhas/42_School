/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:52 by miggomes          #+#    #+#             */
/*   Updated: 2026/04/28 15:11:55 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word(char *str, char c)
{
	int	i;
	int	palavras;

	i = 0;
	palavras = 0;
	while (*str)
	{
		if (*str != c && i == 0)
		{
			i = 1;
			palavras++;
		}
		else if (*str == c)
			i = 0;
		str++;
	}
	return (palavras);
}

static void	ft_free(char **tab, int len)
{
	while (len--)
		free(tab[len]);
	free(tab);
}

static char	*ft_fillword(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		words;
	int		i;
	int		j;
	int	start;

	if (!s)
		return (NULL);
	words = ft_word((char *)s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		res[j] = ft_fillword(s, start, i);
		if (!res[j])
		{
			ft_free(res, j);
			return (NULL);
		}
		j++;
	}
	res[j] = NULL;
	return (res);
}
