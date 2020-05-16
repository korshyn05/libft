/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 19:49:57 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/13 22:28:56 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	char	*p1;
	char	*p2;

	if (!destination && !source)
		return (NULL);
	p1 = (char *)destination;
	p2 = (char *)source;
	while (n != 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (destination);
}
