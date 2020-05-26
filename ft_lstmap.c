/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 22:57:41 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/26 00:29:06 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*begin_list;

	if (!lst || !f)
		return (NULL);
	if (!(begin_list = ft_lstnew(f(lst->content))))
		return (NULL);
	list = begin_list;
	while (lst->next)
	{
		lst = lst->next;
		if (!(begin_list->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&begin_list, del);
			return (NULL);
		}
		begin_list = begin_list->next;
	}
	return (list);
}
