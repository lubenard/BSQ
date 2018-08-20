/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 17:58:11 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

char	**cg_sides(t_tab t, t_char c)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (y <= t.y)
	{
		if (t.tab[y][0] != c.obs)
			t.tab[y][0] = c.lig;
		if (t.tab[y][t.x] != c.obs)
			t.tab[y][t.x] = c.lig;
		y++;
	}	
	while (x <= t.x)
	{
		if (t.tab[0][x] != c.obs)
			t.tab[0][x] = c.lig;
		if (t.tab[t.y][x] != c.obs)
			t.tab[t.y][x] = c.lig;
		(x == t.x || x == 0)? t.tab[t.y][x++] = c.coi : x;
		(x == t.x || x == 0)? t.tab[0][x++] = c.coi : x;
		x++;
	}
	return (t.tab);
}

char	**cg_lines(t_tab t, t_char c, int x, int y)
{
	if (y != t.y)
		while (x <= t.x && t.tab[y + 1][x] != c.obs)
		{
			t.tab[y + 1][x] = (t.tab[y + 1][x] == c.lig) ? c.lig : c.coi;
			x++;
		}
	if (y != t.y)
		while (x >= 0 && t.tab[y + 1][x] != c.obs)
		{
			t.tab[y + 1][x] = (t.tab[y + 1][x] == c.lig) ? c.lig : c.coi;
			x--;
		}
	if (y != 0)
		while (x <= t.x && t.tab[y - 1][x] != c.obs)
		{
			t.tab[y - 1][x] = (t.tab[y - 1][x] == c.lig) ? c.lig : c.coi;
			x++;
		}
	if (y != 0)
		while (x >= 0 && t.tab[y - 1][x] != c.obs)
		{
			t.tab[y - 1][x] = (t.tab[y - 1][x] == c.lig) ? c.lig : c.coi;
			x--;
		}
	if (x != t.x)
		while (y <= t.y && t.tab[y][x + 1] != c.obs)
		{
			t.tab[y][x + 1] = (t.tab[y][x + 1] = c.lig) ? c.lig : c.coi;
			y++;
		}
	if (x != t.x)
		while (y >= 0 && t.tab[y][x + 1] != c.obs)
		{
			t.tab[y][x + 1] = (t.tab[y][x + 1] = c.lig) ? c.lig : c.coi;
			y--;
		}
	if (x != 0)
		while (y <= t.y && t.tab[y][x - 1] != c.obs)
		{
			t.tab[y][x - 1] = (t.tab[y][x - 1] = c.lig) ? c.lig : c.coi;
			y++;
		}
	if (x != 0)
		while (y >= 0 && t.tab[y][x - 1] != c.obs)
		{
			t.tab[y][x - 1] = (t.tab[y][x - 1] = c.lig) ? c.lig : c.coi;
			y--;
		}
	return (t.tab);
}

t_tab	ft_change_grid(t_tab t, t_char c)
{
	int		x_var;

	t.tab = cg_sides(t, c);
	while (t.y >= 0)
	{
		x_var = 0;
		while (x_var <= t.x)
			t.tab = cg_lines(t, c, x_var, t.y);
		t.y--;
	}	return (t);
}
