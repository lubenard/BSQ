/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:13:45 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 21:47:32 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		ft_optimize(int y1, int x1, int y2, int x2)
{
	int		x;
	int		y;

	y = y2;
	while (y >= y1)
	{
		x = x2;
		while (x <= x1)
		{
			if (g_tab.tab[y][x] != g_c.obs)
				g_tab.tab[y][x] = g_c.tem;
			x++;
		}
		y--;
	}
	return (0);
}

int		ft_sav(int i, int x, int y)
{
	if (g_s.longeur < i)
	{
		g_s.x = x;
		g_s.y = y;
		g_s.longeur = i;
	}
	return (0);
}

int		ft_grow(int x, int y)
{
	int		x_var;
	int		y_var;
	int		i;

	i = 0;
	while (x + i + 1 <= g_tab.x && y - i - 1 >= 0)
	{
		x_var = x + ++i;
		y_var = y - i;
		while (x_var >= x)
		{
			if (g_tab.tab[y - i][x_var] == g_c.obs || g_tab.tab[y_var][x + i] == g_c.obs)
				ft_sav(i, x, y);
			if (g_tab.tab[y - i][x_var] == g_c.obs)
				return (ft_optimize(y - i, x_var, y, x));
			if (g_tab.tab[y_var][x + i] == g_c.obs)
				return (ft_optimize(y_var, x + i, y, x));
			x_var--;
			y_var++;
		}
	}
	if (x + i + 1 > g_tab.x || y - i - 1 < 0)
		ft_optimize(y - i, x + i, y, x);
	i++;
	return (ft_sav(i, x, y));
}

t_tab	ft_solve(void)
{
	int		x;
	int		y;

	y = g_tab.y;
	while (y >= 0)
	{
		x = 0;
		while (x <= g_tab.x)
			if (g_tab.tab[y][x] == g_c.vid)
			{
				ft_grow(x++, y);
			}
			else
				x++;
		y--;
	}
	y = g_s.longeur - 1;
	while (y >= 0)
	{
		x = 0;
		while (x < g_s.longeur)
			g_tab.tab[g_s.y - y][g_s.x + x++] = g_c.ple;
		y--;
	}
	return (g_tab);
}
