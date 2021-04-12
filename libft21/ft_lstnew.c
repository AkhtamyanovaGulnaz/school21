/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:45:20 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 13:21:34 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(t_list))))
		return (0);
	if (elem)
	{
		elem->content = content;
		elem->next = NULL;
	}
	return (elem);
}
