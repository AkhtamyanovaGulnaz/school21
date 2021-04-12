/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 15:44:51 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/06 22:14:11 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*list;

	if (begin_list)
	{
		while (begin_list)
		{
			list = begin_list;
			begin_list = begin_list->next;
		}
		return (list);
	}
	return (begin_list);
}
