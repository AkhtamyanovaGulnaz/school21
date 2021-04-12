/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 17:20:52 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/06 19:58:38 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (!list)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while ((list)->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}
