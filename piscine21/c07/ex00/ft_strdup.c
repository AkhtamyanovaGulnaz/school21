/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 17:26:53 by aastraeu          #+#    #+#             */
/*   Updated: 2020/07/31 21:49:30 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		s;
	char	*dest;
	int		i;

	i = 0;
	s = 0;
	while (src[s] != '\0')
		s++;
	dest = (char *)malloc(sizeof(*dest) * (s + 1));
	while (i < s)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
