/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 20:14:53 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/04 20:54:38 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(2, &str[i], 1);
		i++;
	}
}

void	disp_cat(int argc, char **argv)
{
	char	ch;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd >= 0)
		{
			while (read(fd, &ch, 1) != 0)
				write(1, &ch, 1);
		}
		else
		{
			ft_putstr("ft_cat: ");
			ft_putstr(argv[i]);
			ft_putstr(": ");
			ft_putstr(strerror(errno));
			ft_putstr("\n");
		}
		close(fd);
		i++;
	}
}

void	disp_ocat(void)
{
	char	ch;

	while (read(0, &ch, 1) != 0)
		write(1, &ch, 1);
}

int		main(int argc, char **argv)
{
	if ((argc < 2) || argv[1][0] == '-')
	{
		disp_ocat();
	}
	else
		disp_cat(argc, argv);
	return (0);
}
