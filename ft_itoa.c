/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:55:38 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/13 22:26:58 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_length(int n)
{
	int i;

	i = 1;
	while (n / 10 != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		sign;
	int		size;
	int		i;

	sign = (n < 0 ? 1 : 0);
	size = int_length(n);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (sign == 1)
		str[0] = '-';
	i = size + sign - 1;
	str[i] = '\0';
	while (i >= sign)
	{
		if (sign == 1)
			str[i--] = ((n % 10) * -1) + '0';
		else
			str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
