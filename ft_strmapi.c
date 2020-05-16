/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 18:28:35 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/11 22:11:01 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;
	int				l;

	if (s && f)
	{
		i = 0;
		l = strlen((char *)s);
		ptr = (char *)malloc(l * sizeof(ptr));
		if (ptr == NULL)
			return (0);
		while (s[i] != 0)
		{
			ptr[i] = f(i, s[i]);
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}
