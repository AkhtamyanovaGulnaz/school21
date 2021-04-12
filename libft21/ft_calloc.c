/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:49:35 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/14 17:03:00 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	char	*tmp;
	int		memory;
	int		i;

	memory = count * size;
	if (!(tmp = malloc(memory)))
		return (NULL);
	i = 0;
	while (memory--)
	{
		tmp[i] = 0;
		i++;
	}
	return ((void *)tmp);
}
