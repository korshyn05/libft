/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:32:14 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/27 00:01:57 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *p1;
	unsigned char *p2;

	if (!dst && !src)
		return (NULL);
	p1 = (unsigned char *)dst;
	p2 = (unsigned char *)src;
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
