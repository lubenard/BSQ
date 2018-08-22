/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_table.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:08 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 23:05:36 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

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
	while (str[i] != '\n' && str[i])
		i++;
	if ((tab = malloc(sizeof(char*) * (x = words_num(str) - 1)  + 9)) == NULL)
		return (NULL);
	while (str[i])
	{
		if (verif(a, b, c, str[i]))
			error();
		if (str[i] != '\n')
		{
			if ((tab[x] = word_copy(str + i)) == NULL)
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

void	verif_tab(char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (tab[0][i])
		++i;
	while (tab[j])
	{
		k = 0;
		while (tab[j][k] != '\0')
			++k;
		if (i != k)
			error();
		++j;
	}
}

char	**split_backslash_n(char *str)
{
	char	**tab;
	int		i;
	int		x;
	int		test;

	x = words_num(str);
	i = 0;
	test = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		test = test * 10 + (str[i] - 48);
		++i;
	}
	if (x - test != 0 || test <= 0)
		error();
	i = 0;
	while (str[i] <= '9' && str[i] >= '0')
		++i;
	if (str[i + 3] != '\n' || str[i] == str[i + 1]
		|| str[i] == str[i + 2] || str[i + 1] == str[i + 2])
		error();
	tab = ft_split_backslash(str, str[i], str[i + 1], str[i + 2]);
	return (tab);
}
