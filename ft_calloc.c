/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 20:25:10 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/24 15:58:13 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*new;
	size_t	check;

	check = count * size;
	if (check / count != size)
		return (NULL);
	if (!(new = malloc(size * count)))
		return (NULL);
	ft_bzero(new, count * size);
	return (new);
}
