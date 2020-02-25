/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:51:58 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/22 11:32:02 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	unsigned int i;

	i = -1;
	if ((unsigned char*)source == NULL && (unsigned char*)destination == NULL)
		return (0);
	while (++i < num)
		((unsigned char*)destination)[i] = ((unsigned char*)source)[i];
	return (destination);
}
