/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 00:11:24 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/26 23:59:53 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	int_length(long n)
{
	unsigned int	i;

	i = 0;
	if (n == -2147483648)
		return (10);
	if (n < 0)
		n *= -1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char				*ft_itoa(int n)
{
	char				*str;
	unsigned int		i;
	unsigned int		size;
	long int			new_n;

	size = int_length(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	new_n = n;
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		size++;
		new_n *= -1;
	}
	i = size - 1;
	while (new_n >= 10)
	{
		str[i--] = (char)(new_n % 10 + '0');
		new_n /= 10;
	}
	str[i] = (char)(new_n % 10 + '0');
	str[size] = '\0';
	return (str);
}
