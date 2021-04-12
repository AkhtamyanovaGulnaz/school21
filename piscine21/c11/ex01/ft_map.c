/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/04 18:13:10 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/04 20:46:03 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int i;
	int *mp;

	i = 0;
	mp = (int *)malloc(sizeof(int) * lenght);
	if (mp == NULL)
		return (NULL);
	while (i < lenght)
	{
		mp[i] = f(tab[i]);
		i++;
	}
	return (mp);
}
