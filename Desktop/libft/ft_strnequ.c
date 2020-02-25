/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:05:19 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 20:40:47 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		while (*s1 && *s2 && n-- > 0)
			if (*s1++ != *s2++)
				return (0);
	return (1);
}
