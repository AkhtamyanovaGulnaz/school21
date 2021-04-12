/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:13:23 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/05 20:29:01 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int i;

	i = 0;
	if ((lenght == 0) || (lenght == 1))
		return (1);
	if (f(tab[0], tab[lenght - 1]) < 0)
	{
		while (i < (lenght - 1))
		{
			if (!(f(tab[i], tab[i + 1]) <= 0))
				return (0);
			i++;
		}
	}
	else
	{
		i = lenght - 1;
		while (i > 0)
		{
			if (!(f(tab[i], tab[i - 1]) <= 0))
				return (0);
			i--;
		}
	}
	return (1);
}
