/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aastraeu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:53:56 by aastraeu          #+#    #+#             */
/*   Updated: 2020/11/24 19:53:08 by aastraeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_words(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if ((s[i] != c) && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

int			w_len(char const *s, char c)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

void		*m_free(char **points, int words)
{
	int		i;

	i = 0;
	while (i < words)
	{
		free(points[i]);
		i++;
	}
	free(points);
	return (0);
}

char		**start(char const *s, char c, char **points, int words)
{
	int		i;
	int		k;
	int		j;
	int		size;

	i = 0;
	k = 0;
	while (i < words)
	{
		while (s[k] == c)
			k++;
		size = w_len(&s[k], c);
		if (!(points[i] = malloc(size + 1)))
		{
			m_free(points, i);
			return (0);
		}
		j = 0;
		while (j < size)
			points[i][j++] = s[k++];
		points[i][j] = '\0';
		i++;
	}
	points[i] = NULL;
	return (points);
}

char		**ft_split(char const *s, char c)
{
	char	**points;
	int		words;

	if (!s)
		return (NULL);
	words = ft_words(s, c);
	if (!(points = (char**)malloc(sizeof(char *) * (words + 1))))
		return (NULL);
	return (start(s, c, points, words));
}
