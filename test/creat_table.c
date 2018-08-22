/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:08 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 16:05:33 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		count_word(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			++j;
		++i;
	}
	return (j);
}

int		count_char(int i, char *str)
{
	int		j;

	j = 0;
	while (str[i] != '\n')
	{
		++j;
		++i;
	}
	return (j);
}

int		verif(char a, char b, char c, char trys)
{
	if (trys != a && trys != b && trys != c && trys != '\n' && trys != '\0')
		return (1);
	return (0);
}

char	**split_backslash_n2(char *str, int i, char a, char b)
{
	char	**tab;
	int		k;
	int		j;
	char	c;

	c = str[i + 2];
	if (!(tab = (char**)malloc(sizeof(char*) * ((k = (count_word(str))) * 6))))
		return (NULL);
	k = k - 2;
	while (str[i] != '\n' && str[i])
		++i;
	while (k >= 0)
	{
		j = 0;
		if (k >= 0)
			if (!(tab[k] = (char*)malloc(sizeof(*tab) * (count_char(i, str) + 1))))
				return (NULL);
		while (str[++i] != '\n')
		{
			if (verif(a, b, c, str[i]) == 1)
				error();
			tab[k][j++] = str[i];
		}
		tab[k--][j] = '\0';
		g_tab.y = j - 1;
	}
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
	tab = split_backslash_n2(str, i, a, b);
	return (tab);
}
