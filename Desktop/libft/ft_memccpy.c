/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:51:58 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 20:14:12 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *destination, const void *source, int c, size_t num)
{
	unsigned int	i;

	i = -1;
	while (++i < num)
	{
		((unsigned char*)destination)[i] = ((unsigned char*)source)[i];
		if (((unsigned char*)source)[i] == (unsigned char)c)
			return (destination + i + 1);
	}
	return (NULL);
}
