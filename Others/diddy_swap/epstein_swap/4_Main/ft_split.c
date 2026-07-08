/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nuelblin <nuelblin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 17:12:22 by nuelblin          #+#    #+#             */
/*   Updated: 2026/07/08 17:12:35 by nuelblin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*get_next_word(char const *s, char c, int *index)
{
	int		start;
	int		len;
	int		i;
	char	*word;

	while (s[*index] == c)
		(*index)++;
	start = *index;
	while (s[*index] && s[*index] != c)
		(*index)++;
	len = *index - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < *index)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		words;
	int		i;
	int		s_idx;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	matrix = malloc(sizeof(char *) * (words + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	s_idx = 0;
	while (i < words)
	{
		matrix[i] = get_next_word(s, c, &s_idx);
		if (!matrix[i])
		{
			while (i > 0)
				free(matrix[--i]);
			free(matrix);
			return (NULL);
		}
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}