/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:40:46 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/06 20:42:21 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	char *p1;
	char sym;

	p1 = (char *)src;
	sym = (char)c;
	while (n != 0)
	{
		if (*p1 == sym)
			return (p1);
		p1++;
		n--;
	}
	return (NULL);
}
