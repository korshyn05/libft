/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:33:17 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/13 14:01:13 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *list;

	if (!(list = (t_list *)malloc(sizeof(*list))))
		return (NULL);
	if (!content)
		list->content = NULL;
	else
		list->content = content;
	list->next = NULL;
	return (list);
}
