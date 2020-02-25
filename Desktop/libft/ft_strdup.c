/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:37:08 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/22 11:45:01 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		length;
	int		i;

	length = 0;
	i = -1;
	while (s[length])
		length++;
	str = (char *)malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (0);
	while (++i < length)
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
