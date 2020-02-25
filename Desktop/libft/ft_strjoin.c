/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:45:02 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 20:51:19 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		i = ft_strlen((char*)s1);
		j = ft_strlen((char*)s2);
	}
	if (!(join = (char *)malloc(sizeof(char) * (i + j))))
		return (NULL);
	i = 0;
	j = 0;
	if (s1 && s2)
	{
		while (s1[i] != '\0' && (join[i] = s1[i]))
			i++;
		while (s2[j] != '\0' && (join[i + j] = s2[j]))
			j++;
		join[i + j] = '\0';
	}
	return (join);
}
