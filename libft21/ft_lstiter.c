/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:23:55 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 15:43:16 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!f)
		return ;
	while (lst)
	{
		tmp = lst->next;
		if (f)
			f(lst->content);
		lst = tmp;
	}
}
