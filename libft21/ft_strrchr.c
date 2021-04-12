/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 17:37:21 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/13 13:16:56 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return ((char *)&s[i--]);
	if (s[0] == '\0')
		return (0);
	while (s[i] != c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)&s[i]);
}
