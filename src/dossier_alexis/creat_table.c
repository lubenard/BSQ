/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyczyns <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 13:02:08 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/21 15:08:49 by atyczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
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
	if (try != a && try != b && try != c && try != '\n' && try != '\0')
		return (1);
	return (0);
}

void	ft_error(char c)
{
	write(1, &c, 2);
	write(2, "map error\n", 10);
}


char	**split_backslash_n2(char *str, int i, char a, char b, char c)
{
	char	**tab;
	int		k;
	int		j;

	k = count_word(str) + 1;
	tab = (char**)malloc(sizeof(**tab) * (count_word(str) + 1));
	tab[k--] = 0;
	while (str[i])
	{
		if (verif(a, b, c, str[i]) == 1)
			ft_error(str[i]);
		j = 0;
		tab[k] = (char*)malloc(sizeof(*tab) * (count_char(i, str) + 1));
		while (str[i] != '\n')
			tab[k][j++] = str[i++];
		tab[k--][j] = '\0';
		++i;
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
	while (str[i] > '9' || str[i] < '0')
		++i;
	a = str[i];
	b = str[i + 1];
	c = str[i + 2];
	tab = split_backslash_n2(str, i, a, b, c);
	return (tab);
}

void	ft_displa(char **tab, int x, int y)
{
	while (y >= 0)
	{
		write(1, tab[y], x + 1);
		ft_putchar('\n');
		y--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main()
{
	char	**tab;
	char	str[] = "11abc\naaa\nbbb\nccc\n";

	tab = split_backslash_n(str);
	ft_displa(tab, 2, 3);
	return (0);
}
