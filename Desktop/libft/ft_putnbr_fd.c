/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:15:00 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/20 20:16:31 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int i;

	i = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -1;
	}
	if (n / 10 != 0)
		ft_putnbr_fd(n / 10 * i, fd);
	ft_putchar_fd(n % 10 * i + '0', fd);
}
