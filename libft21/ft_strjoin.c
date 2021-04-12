/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:01:39 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/20 14:36:10 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	k;
	char			*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	if (!(str = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	k = i;
	i = 0;
	while (s2[i] != '\0')
	{
		str[k + i] = s2[i];
		i++;
	}
	str[k + i] = '\0';
	return (str);
}
