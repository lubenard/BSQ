/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyczyns <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:08 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/21 13:35:18 by atyczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

int		verif(char a, char b, char c, char try)
{
	if (try != a && try != b && try != c)
		return (1);
	return (0);
}

char	**split_backslash_n2(char *str, int i, char a, char b, char c)
{
	char	**tab;
	int		k;
	int		j;

	k = 0;
	tab = (char**)malloc(sizeof(**tab) * (count_word(str) + 1));
	while (str[i])
	{
		if (verif(a, b, c, str[i]) == 1)
			error();
		j = 0;
		*tab = (char*)malloc(sizeof(*tab) * (count_char(i, str) + 1));
		while (str[i] != '\n')
			tab[k][j++] = str[i++];
		tab[k++][j] = '\0';
		++i;
	}
	tab[k] = 0;
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
	while (str[i] > '9' || str[i] < '0')
		++i;
	a = str[i];
	b = str[i + 1];
	c = str[i + 2];
	tab = split_backslash_n2(str, 0, a, b, c);
	return (tab);
}
