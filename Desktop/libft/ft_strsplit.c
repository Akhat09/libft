/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:27:01 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 19:55:34 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	words(char const *s, char c)
{
	int	count;

	count = 0;
	if (*s != c && *s)
	{
		s++;
		count++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s)
				count++;
		}
		s++;
	}
	return (count);
}

static int	length(char const *s, char c)
{
	int i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s || !(array = (char **)malloc(sizeof(char *) * (words(s, c) + 1))))
		return (NULL);
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			if (!(array[i] = (char *)malloc(length(s, c) + 1)))
				return (NULL);
			while (*s && *s != c)
				array[i][j++] = (char)*s++;
			array[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	array[i] = NULL;
	return (array);
}
