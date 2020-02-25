/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 13:48:23 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 19:52:22 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_size(int n)
{
	int		size;

	size = 0;
	while (n >= 10 && (size += 1))
		n = n / 10;
	return (size + 1);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		size;
	int		sign;

	i = 0;
	sign = 0;
	if (!(str = (char*)malloc(sizeof(char) * 1)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	size = ft_size(n < 0 ? -n : n);
	if (n < 0 && (sign = 1))
		n = -n;
	if (!(str = (char*)malloc(sizeof(char) * (size + sign + 1))))
		return (NULL);
	if (sign == 1 && (str[i] = '-'))
		size++;
	i = size - 1;
	while (n >= 10 && (str[i--] = n % 10 + '0'))
		n /= 10;
	str[i] = n % 10 + '0';
	str[size] = '\0';
	return (str);
}
