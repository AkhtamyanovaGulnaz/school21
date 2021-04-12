/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 10:32:16 by aastraeu          #+#    #+#             */
/*   Updated: 2020/07/28 15:19:32 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int	res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') ||
			(str[i] == '\f') || (str[i] == '\r') || (str[i] == ' '))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (sign == -1)
		res = res * -1;
	return (res);
}
