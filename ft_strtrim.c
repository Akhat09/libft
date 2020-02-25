/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:29:15 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/23 09:03:51 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s)
{
	char	*c;
	int		l;
	int		i;
	char	*t;

	if (!s)
		return (NULL);
	i = 0;
	l = 0;
	if (!(c = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
		return (NULL);
	while (s[l] == ' ' || s[l] == '\n' || s[l] == '\t' || s[l] == ',')
		l++;
	while (s[l] != '\0')
		c[i++] = s[l++];
	i--;
	while (c[i] == ' ' || c[i] == '\n' || c[i] == '\t' || c[i] == ',')
		c[i--] = '\0';
	i = 0;
	l = 0;
	t = (char *)malloc(sizeof(char) * (ft_strlen(c) + 1));
	while (c[i] != '\0')
		t[i++] = c[l++];
	t[l] = '\0';
	return (t);
}
