/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 18:00:21 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/10 20:07:23 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*str1;
	char		*str2;

	if (src == NULL && dst == NULL)
		return (NULL);
	str1 = src;
	str2 = dst;
	i = 0;
	while (i < n)
	{
		str2[i] = str1[i];
		i++;
	}
	return (str2);
}
