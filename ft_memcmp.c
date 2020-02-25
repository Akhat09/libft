/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:04:10 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/23 13:49:22 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	while (*((unsigned char*)s1) == *((unsigned char*)s2) && ++i < n)
	{
		s1++;
		s2++;
	}
	return ((int)(*((unsigned char*)s1) - *((unsigned char*)s2)));
}
