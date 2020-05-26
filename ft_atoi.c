/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:31:47 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/27 00:06:10 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int n;
	int sign;

	n = 0;
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' || *nptr == '\v'
			|| *nptr == '\r' || *nptr == '\f')
		nptr++;
	if ((*nptr < '0' || *nptr > '9') && *nptr != '-' && *nptr != '+')
		return (0);
	else if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = 10 * n + (*nptr - '0');
		if (n < 0 && n != -2147483648)
			return (sign == 1 ? 0 : -1);
		nptr++;
	}
	return (n * sign);
}
