/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 14:02:10 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/14 19:15:09 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				m;
	unsigned int	i;

	if (n == 0)
		return (0);
	n--;
	i = 0;
	while ((unsigned char)s1[i] == (unsigned char)s2[i] && i < n)
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	m = (unsigned char)s1[i] - (unsigned char)s2[i];
	if (m > 0)
		return (1);
	else if (m < 0)
		return (-1);
	return (0);
}
