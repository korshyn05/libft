/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tludwig <tludwig@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 21:15:32 by tludwig           #+#    #+#             */
/*   Updated: 2020/05/24 16:40:36 by tludwig          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*entry;

	if (!lst || !del || !(*lst))
		return ;
	entry = *lst;
	while (entry)
	{
		tmp = entry->next;
		del(entry->content);
		free(entry);
		entry = tmp;
	}
	*lst = NULL;
}
