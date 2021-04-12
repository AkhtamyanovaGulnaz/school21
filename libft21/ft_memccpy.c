/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:09:21 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/10 21:47:55 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;
	unsigned char	s;

	str1 = (unsigned char*)src;
	str2 = (unsigned char*)dst;
	s = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		str2[i] = str1[i];
		if (str1[i] == s)
		{
			return (dst + ++i);
		}
		i++;
	}
	return (NULL);
}
