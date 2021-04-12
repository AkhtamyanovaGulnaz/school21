/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:51:52 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 19:39:01 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	int		m;

	i = 0;
	j = 0;
	m = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	while (j < dstsize && dst[j])
		j++;
	if (j >= dstsize)
		return (dstsize + i);
	while (dstsize > (j + m + 1) && src[m])
	{
		dst[j + m] = src[m];
		m++;
	}
	dst[j + m] = '\0';
	return (j + i);
}
