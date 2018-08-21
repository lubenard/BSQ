/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyczyns <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:04:57 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/21 16:32:46 by atyczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (dest[i])
		++i;
	while (src[j])
	{
		dest[i] = src[j];
		++j;
	}
	dest[j] = '\0';
	return (dest);
}

void	error(void)
{
	write(2, "map error\n", 10);
}
