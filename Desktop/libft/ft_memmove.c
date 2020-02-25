/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:29:54 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 20:14:44 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t n)
{
	unsigned int	i;

	i = 0;
	if ((unsigned char*)to == NULL && (unsigned char*)from == NULL)
		return (0);
	if ((unsigned char *)from < (unsigned char *)to)
		while (++i <= n)
			((unsigned char *)to)[n - i] = ((unsigned char *)from)[n - i];
	else
		while (n-- > 0)
			*((unsigned char *)to++) = *((unsigned char *)from++);
	return ((unsigned char *)to);
}
