/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 19:49:57 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/27 00:02:01 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	if (!destination && !source)
		return (NULL);
	p1 = (unsigned char *)destination;
	p2 = (unsigned char *)source;
	while (n != 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (destination);
}
