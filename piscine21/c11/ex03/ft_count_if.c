/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:35:53 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/05 12:11:23 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			c++;
		i++;
	}
	return (c);
}