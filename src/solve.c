/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:13:45 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 14:03:47 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

void		ft_optimize(int y1, int x1, int y2, int x2)
{
	int		x;
	int		y;

	y = t.y;
	if (t.tab[y2][x2] != c.vid)
	{
		x1 = x2;
		y1 = y2;
	}
	while (y >= y1)
	{
		x = 0;
		while (x <= x1)
			t.tab[y][x++] = c.obs;
		y--;
	}
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
		i++;
		x_var = x;
		y_var = y;
		while (x_var <= (x + i))
		{
			if (t.tab[y - i][x_var] != c.vid || t.tab[y_var][x + i] != c.vid)
			{
				ft_sav(i, x, y);
				ft_optimize(y - i, x_var, y_var, x + i);
				ft_display(t);
				ft_putchar('\n');
				return (0);
			}
			x_var++;
			y_var--;
		}
	}
	i++;
	ft_sav(i, x, y);
	ft_display(t);
	ft_putchar('\n');
	return (0);
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
				ft_grow(x++, y);
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
