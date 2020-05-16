/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 11:28:25 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/11 22:15:04 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t num)
{
	char	*p;
	size_t	needle_len;
	size_t	k;
	size_t	i;

	p = (char *)str;
	if (!(needle_len = ft_strlen(needle)))
		return (p);
	if (ft_strlen(str) < needle_len || num < needle_len)
		return (NULL);
	i = 0;
	while (p[i] != '\0' && i <= num - needle_len)
	{
		k = 0;
		while (needle[k] != '\0' && needle[k] == p[i + k])
			k++;
		if (k == needle_len)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
