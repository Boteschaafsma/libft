/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bootjan <bootjan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:27:28 by bschaafs          #+#    #+#             */
/*   Updated: 2023/10/10 16:45:09 by bootjan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_total_words(const char *s, char c)
{
	int	total_words;
	int	on_word;

	total_words = 0;
	on_word = 0;
	while (*s)
	{
		if (*s != c && on_word == 0)
		{
			total_words++;
			on_word = 1;
		}
		if (*s == c)
			on_word = 0;
		s++;
	}
	return (total_words);
}

int	update_start(char s, char c, int start, int i)
{
	if (s != c && start == -1)
		return (i);
	if (s == c)
		return (-1);
	return (start);
}

char	**ft_split(const char *s, char c)
{
	char	**out;
	int		start;
	int		total_words;
	int		i;
	int		j;

	total_words = count_total_words(s, c) + 1;
	out = (char **)ft_calloc(total_words, sizeof(char *));
	if (!out)
		return (NULL);
	start = -1;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == c && start >= 0)
			out[j++] = ft_substr(s, start, i - start);
		start = update_start(s[i], c, start, i);
		i++;
	}
	if (start >= 0)
		out[j++] = ft_substr(s, start, i - start);
	out[j] = NULL;
	return (out);
}
