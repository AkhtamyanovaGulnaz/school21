/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 12:57:30 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/12 13:54:09 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*str1;
	unsigned char		*str2;

	str1 = src;
	str2 = dst;
	if (str1 > str2)
	{
		i = 0;
		while (i < len)
		{
			str2[i] = str1[i];
			i++;
		}
	}
	else if (str1 < str2)
	{
		i = len;
		while (i > 0)
		{
			str2[i - 1] = str1[i - 1];
			i--;
		}
	}
	return (str2);
}
