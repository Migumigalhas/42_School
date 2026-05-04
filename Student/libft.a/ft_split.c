/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggomes <miggomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:47:52 by miggomes          #+#    #+#             */
/*   Updated: 2026/05/04 16:15:22 by miggomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *str, char del)
{
	int	i;
	int	count;
	int	in;

	in = 0;
	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != del && in == 0)
		{
			count++;
			in = 1;
		}
		else if (str[i] == del)
			in = 0;
		i++;
	}
	return (count);
}

static void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != NULL)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_wordlen(char *str, char c)
{
	int	len;

	len = 0;
	while (str[len] != '\0' && str[len] != c)
		len++;
	return (len);
}

static char	**fill_word(char *str, char c, char **result)
{
	int	word;
	int	i;
	int	j;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i])
		{
			result[word] = malloc(ft_wordlen(str + i, c) + 1);
			if (!result[word])
				return (ft_free(result), NULL);
			j = 0;
			while (str[i] && str[i] != c)
				result[word][j++] = str[i++];
			result[word++][j] = '\0';
		}
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words((char *)s, c);
	res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	res[words] = NULL;
	return (fill_word((char *)s, c, res));
}
