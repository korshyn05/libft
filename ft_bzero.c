/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 19:46:29 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/20 22:21:13 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *p, size_t n)
{
	char	*ptr;

	ptr = (char *)p;
	while (n != 0)
	{
		*ptr = '\0';
		ptr++;
		n--;
	}
}
