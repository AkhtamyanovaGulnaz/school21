/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:54:48 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/12 15:16:02 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;

	str = (unsigned char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n && str[i] != ch)
	{
		i++;
	}
	if (i == n)
	{
		return (NULL);
	}
	return ((unsigned char *)s + i);
}
