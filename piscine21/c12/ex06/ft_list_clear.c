/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 23:04:12 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/06 23:25:28 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*list1;
	t_list	*list;

	list1 = begin_list;
	while (list1)
	{
		free_fct(list1->data);
		list = list1;
		list1 = list1->next;
		free(list);
	}
}
