/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 15:58:27 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/14 17:57:33 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*tmp;
	int		m;
	int		i;

	m = 0;
	while (s1[m])
		m++;
	if (!(tmp = (char *)malloc(sizeof(char) * (m + 1))))
		return (NULL);
	i = 0;
	while (i < m)
	{
		tmp[i] = s1[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
