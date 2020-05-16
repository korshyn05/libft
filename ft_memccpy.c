/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 19:57:44 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/14 22:13:08 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dest;
	p2 = (char *)src;
	while (n != 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		if (*(p1 - 1) == (char)c)
			return (p1);
		n--;
	}
	return (NULL);
}
