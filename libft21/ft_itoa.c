/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:46:04 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/25 23:28:40 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			size(int c)
{
	int		i;

	i = 0;
	if (c <= 0)
		i++;
	while (c)
	{
		i++;
		c = c / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		s;

	s = size(n);
	if (n == -2147483648)
		return (str = ft_strdup("-2147483648"));
	if (!(str = malloc(s + 1)))
		return (NULL);
	str[s--] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[s] = '0' + (n % 10);
		n = n / 10;
		s--;
	}
	return (str);
}
