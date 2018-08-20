/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 21:06:27 by hjamet           ###   ########.fr       */
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
		(x == t.x || x == 0)? t.tab[t.y][x] = c.coi : x;
		(x == t.x || x == 0)? t.tab[0][x] = c.coi : x;
		x++;
	}
	ft_display(t);
	ft_putchar('\n');
	return (t.tab);
}

char	**cg_lines(t_tab t, t_char c, int x, int y)
{
	if (y != t.y)
		while (x <= t.x && t.tab[y + 1][x] != c.obs)
			x++;
	(x > t.x) ? x-- : x;
	if (y != t.y)
		while (x >= 0 && t.tab[y + 1][x] != c.obs)
		{
			t.tab[y + 1][x] = (t.tab[y + 1][x] == c.lig) ? c.lig : c.coi;
			x--;
		}
	(x < 0) ? x++ : x;
	if (y != 0)
		while (x <= t.x && t.tab[y - 1][x] != c.obs)
			x++;
	(x > t.x) ? x-- : x;	
	if (y != 0)
		while (x >= 0 && t.tab[y - 1][x] != c.obs)
		{
			t.tab[y - 1][x] = (t.tab[y - 1][x] == c.lig) ? c.lig : c.coi;
			x--;
		}
	(x < 0) ? x++ : x;
	if (x != t.x)
		while (y <= t.y && t.tab[y][x + 1] != c.obs)
			y++;
	(y > t.y) ? y-- : y;
	if (x != t.x)
		while (y >= 0 && t.tab[y][x + 1] != c.obs)
		{
			t.tab[y][x + 1] = (t.tab[y][x + 1] = c.lig) ? c.lig : c.coi;
			y--;
		}
	(y < 0) ? y++ : y;
	if (x != 0)
		while (y <= t.y && t.tab[y][x - 1] != c.obs)
			y++;
	(y > t.y) ? y-- : y;
	if (x != 0)
		while (y >= 0 && t.tab[y][x - 1] != c.obs)
		{
			t.tab[y][x - 1] = (t.tab[y][x - 1] = c.lig) ? c.lig : c.coi;
			y--;
		}
	(y < 0) ? y++ : y;
	return (t.tab);
}

t_tab	ft_change_grid(t_tab t, t_char c)
{
	int		x_var;
	int		y_var;

	y_var = t.y;
	t.tab = cg_sides(t, c);
	while (y_var >= 0)
	{
		x_var = 0;
		while (x_var <= t.x)
		{
			if (t.tab[y_var][x_var] == c.obs)
				t.tab = cg_lines(t, c, x_var, y_var);
			x_var++;
		}
		y_var--;
	}	return (t);
}
