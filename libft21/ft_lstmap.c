/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:43:30 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 17:14:19 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	list = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		if (!(new = ft_lstnew(f(lst->content))))
		{
			while (list)
			{
				new = list->next;
				(*del)(list->content);
				free(list);
				list = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		lst = lst->next;
	}
	return (list);
}
