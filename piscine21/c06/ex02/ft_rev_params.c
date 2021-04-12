/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/29 18:34:35 by aastraeu          #+#    #+#             */
/*   Updated: 2020/07/29 18:49:42 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	s;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != 0)
		{
			s = argv[i][j];
			write(1, &s, 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
