/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 14:06:57 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/20 16:00:53 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	while (len-- >= 0)
		if (str[len + 1] == (unsigned char)c)
			return ((char *)str + len + 1);
	return (NULL);
}
