/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aksuleim <aksuleim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:24:32 by aksuleim          #+#    #+#             */
/*   Updated: 2020/02/24 20:39:13 by aksuleim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0'
		&& i < (n - 1))
		i++;
	if (str1[i] != str2[i] && n > 0)
		return (str1[i] - str2[i]);
	else
		return (0);
}
