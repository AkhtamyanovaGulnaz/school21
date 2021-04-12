/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 15:21:56 by aastraeu          #+#    #+#             */
/*   Updated: 2020/08/03 19:24:01 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	ssize_t	ret;
	char	ch;

	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	while ((ret = read(fd, &ch, 1)) > 0)
		write(1, &ch, 1);
	if (ret < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	close(fd);
	return (0);
}
