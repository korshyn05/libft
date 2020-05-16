/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:32:14 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/13 22:29:49 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *p1;
	char *p2;

	if (!dst && !src)
		return (NULL);
	p1 = (char *)dst;
	p2 = (char *)src;
	if (p1 < p2)
		while (len != 0)
		{
			*p1++ = *p2++;
			len--;
		}
	else
	{
		p1 += len;
		p2 += len;
		while (len != 0)
		{
			*--p1 = *--p2;
			len--;
		}
	}
	return (dst);
}
