/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:42:39 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/14 21:35:59 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	size_t	count;
	int		in_word;

	in_word = 0;
	count = 0;
	while (*str)
	{
		if (!in_word && *str != c)
			count++;
		in_word = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	in_word;
	size_t	word_index;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	if (!(arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	word_index = 0;
	in_word = 0;
	i = -1;
	start = 0;
	while (s[++i])
	{
		if (in_word && s[i] == c)
			arr[word_index++] = ft_substr(s, start, i - start);
		if (!in_word && s[i] != c)
			start = i;
		in_word = (s[i] == c) ? 0 : 1;
	}
	if (in_word)
		arr[word_index] = ft_substr(s, start, i - start);
	return (arr);
}
