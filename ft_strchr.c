/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:15:43 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/20 14:20:28 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned int i;
	unsigned int len;

	i = -1;
	len = 0;
	while (str[len] != '\0')
		len++;
	while (++i <= len)
		if (str[i] == (unsigned char)c)
			return ((char *)str + i);
	return (NULL);
}
