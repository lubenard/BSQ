/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:04:57 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 23:05:59 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

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
		++i;
	}
	return (dest);
}

void	error(void)
{
	write(2, "map error\n", 10);
	exit (0);
}

char	*word_copy(char *src)
{
	int		index;
	char	*output;

	index = 0;
	while (src[index] != '\n')
		index++;
	output = malloc(sizeof(char) * (index + 1));
	if (output == NULL)
		return (NULL);
	index = 0;
	while (src[index] != '\n')
	{
		output[index] = src[index];
		index++;
	}
	output[index] = '\0';
	return (output);
}

int		words_num(char *str)
{
	int		index;
	int		n;

	index = 0;
	n = 0;
	while (str[index])
	{
		if (str[index] != '\n')
		{
			n++;
			while (str[index] != '\n')
				index++;
		}
		else
			index++;
	}
	g_tab.y = (n - 2);
	return (n - 1);
}
