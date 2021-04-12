/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:21:32 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 15:23:24 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*list;
	t_list	*tmp;

	if (!del)
		return ;
	list = *lst;
	while (list)
	{
		tmp = list->next;
		if (del)
			del(list->content);
		free(list);
		list = tmp;
	}
	*lst = NULL;
}
