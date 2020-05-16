/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:43:36 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/13 21:13:30 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*new;
	int		size;

	if (!lst)
		return (0);
	new = lst;
	size = 0;
	while (new)
	{
		size++;
		new = new->next;
	}
	return (size);
}
