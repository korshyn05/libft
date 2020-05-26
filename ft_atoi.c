/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:31:47 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/27 00:39:41 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(int n, int size, int sign)
{
	if (size > 10 && sign == 1)
		return (-1);
	if (size > 10 && sign == -1)
		return (0);
	return (n * sign);
}

int			ft_atoi(const char *nptr)
{
	int n;
	int sign;
	int size;

	n = 0;
	sign = 1;
	size = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
			|| *nptr == '\r' || *nptr == '\f')
		nptr++;
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = 10 * n + (*nptr - '0');
		nptr++;
		size++;
	}
	return (check(n, size, sign));
}
