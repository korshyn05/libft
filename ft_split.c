/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 23:22:10 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/21 10:46:48 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static int			count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		s = skip(s, c);
		if (*s != '\0')
		{
			while (*s != '\0' && *s != c)
				s++;
			count++;
		}
	}
	return (count);
}

static int			free_mem(char **str)
{
	int i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
	return (0);
}

static int			fill_str(char const *s, char c, char **res, int count)
{
	char	*str;
	int		i;
	int		m;

	m = 0;
	while (count > 0)
	{
		s = skip(s, c);
		i = 0;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (!(str = (char *)malloc(sizeof(char) * (i) + 1)))
			return (free_mem(res));
		ft_strlcpy(str, s, i + 1);
		res[m] = str;
		s += i;
		count--;
		m++;
	}
	res[m] = NULL;
	return (1);
}

char				**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	if (fill_str(s, c, res, words) == 0)
		return (NULL);
	return (res);
}
