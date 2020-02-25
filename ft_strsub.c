/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:09:06 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/22 13:23:44 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	int		size2;

	i = 0;
	size2 = len + 1;
	sub = (char *)malloc(sizeof(char) * size2);
	if (!sub)
		return (NULL);
	if (s)
	{
		while (len-- > 0)
			sub[i++] = s[start++];
		while (i != size2)
			sub[i++] = '\0';
	}
	return (sub);
}
