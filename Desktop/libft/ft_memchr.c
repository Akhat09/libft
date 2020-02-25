/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:32:51 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/22 12:22:15 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	unsigned int	i;

	i = -1;
	while (++i < num)
		if (((unsigned char *)ptr)[i] == (unsigned char)value)
			return ((unsigned char *)ptr + i);
	return (NULL);
}
