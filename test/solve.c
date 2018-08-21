/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:13:45 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 21:32:46 by hjamet           ###   ########.fr       */
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
			if (t.tab[y][x] != c.obs)
				t.tab[y][x] = c.tem;
			x++;
		}
		y--;
	}
	return (0);
}

int		ft_sav(int i, int x, int y)
{
	if (s.longeur < i)
	{
		s.x = x;
		s.y = y;
		s.longeur = i;
	}
	return (0);
}

int		ft_grow(int x, int y)
{
	int		x_var;
	int		y_var;
	int		i;

	i = 0;
	while (x + i + 1 <= t.x && y - i - 1 >= 0)
	{
		x_var = x + ++i;
		y_var = y - i;
		while (x_var >= x)
		{
			if (t.tab[y - i][x_var] == c.obs || t.tab[y_var][x + i] == c.obs)
				ft_sav(i, x, y);
			if (t.tab[y - i][x_var] == c.obs)
				return (ft_optimize(y - i, x_var, y, x));
			if (t.tab[y_var][x + i] == c.obs)
				return (ft_optimize(y_var, x + i, y, x));
			x_var--;
			y_var++;
		}
	}
	if (x + i + 1 > t.x || y - i - 1 < 0)
		ft_optimize(y - i, x + i, y, x);
	i++;
	return (ft_sav(i, x, y));
}

t_tab	ft_solve(void)
{
	int		x;
	int		y;

	y = t.y;
	while (y >= 0)
	{
		x = 0;
		while (x <= t.x)
			if (t.tab[y][x] == c.vid)
			{
				ft_grow(x++, y);
			}
			else
				x++;
		y--;
	}
	y = s.longeur - 1;
	while (y >= 0)
	{
		x = 0;
		while (x < s.longeur)
			t.tab[s.y - y][s.x + x++] = c.ple;
		y--;
	}
	return (t);
}
