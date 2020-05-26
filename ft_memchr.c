/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:40:46 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/27 00:01:02 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	unsigned char *p1;
	unsigned char sym;

	p1 = (unsigned char *)src;
	sym = (unsigned char)c;
	while (n != 0)
	{
		if (*p1 == sym)
			return (p1);
		p1++;
		n--;
	}
	return (NULL);
}
