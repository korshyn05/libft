/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 20:49:33 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/12 19:55:46 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			count;
	int				i;

	ptr1 = (unsigned char *)str1;
	ptr2 = (unsigned char *)str2;
	count = 0;
	i = 0;
	while ((ptr1[i] != '\0' || ptr2[i] != '\0') && count < num)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		count++;
		i++;
	}
	return (0);
}
