/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:17:33 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 17:16:08 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	k;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	k = ft_strlen(s1);
	while (k && ft_strchr(set, s1[k]))
		k--;
	str = ft_substr((char*)s1, 0, k + 1);
	return (str);
}
