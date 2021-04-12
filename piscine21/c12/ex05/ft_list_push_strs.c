/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/06 18:40:46 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/06 22:48:39 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*n;
	t_list	*p;
	int		i;

	n = 0;
	i = 0;
	while (i < size)
	{
		p = n;
		n = ft_create_elem(strs[i]);
		n->next = p;
		i++;
	}
	return (n);
}
