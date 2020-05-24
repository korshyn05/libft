/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 16:55:38 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/24 15:52:48 by tludwig          ###   ########.fr       */
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
	int		is_negative;
	int		size;
	int		i;

	is_negative = (n < 0 ? 1 : 0);
	size = int_length(n);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	if (is_negative == 1)
		str[0] = '-';
	i = size + is_negative - 1;
	str[i] = '\0';
	while (i >= is_negative)
	{
		if (is_negative == 1)
			str[i--] = ((n % 10) * -1) + '0';
		else
			str[i--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
