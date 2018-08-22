/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:08 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 18:39:48 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

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

int		verif(char a, char b, char c, char trys)
{
	if (trys != a && trys != b && trys != c && trys != '\n' && trys != '\0')
		return (1);
	return (0);
}

char	**ft_split_backslash(char *str, char a, char b, char c)
{
	int		i;
	int		x;
	char	**tab;

	i = 0;
	x = words_num(str) - 1;
	while (str[i] != '\n' && str[i])
		i++;
	if ((tab = malloc(sizeof(char*) * x + 9)) == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != '\n')
		{
			tab[x] = word_copy(str + i);
			if (tab[x] == NULL)
				return (NULL);
			while (str[i] != '\n')
				i++;
			x--;
		}
		else
			i++;
	}
	tab[words_num(str) + 1] = 0;
	return (tab);
}

char	**split_backslash_n(char *str)
{
	char	**tab;
	int		i;
	char	a;
	char	b;
	char	c;

	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		++i;
	a = str[i];
	b = str[i + 1];
	c = str[i + 2];
	if (str[i + 3] != '\n')
		error();
	tab = ft_split_backslash(str, a, b, c);
	return (tab);
}
