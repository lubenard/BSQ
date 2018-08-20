/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 21:13:45 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 00:30:21 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

int   ft_grow(t_tab t, t_char c, int x, int y)
{
    int     x_var;
    int     y_var;
    int     i;

    i = 0;
    while (x + i + 1 <= t.x && y - i - 1 >= 0)
    {
        i++;
        x_var = x;
        y_var = y;
        while (x_var < (x + i))
        {
            if (t.tab[y - i][x_var] != c.vid || t.tab[y_var][x + i] != c.vid)
            {
                if (s.longeur < i -1)
                {
                    s.x = x;
                    s.y = y;
                    s.longeur = i;
                    return (0);
                }
                return (0);
            }
            x_var++;
            y_var--;
        }
    }
    if (s.longeur < i - 1)
    {
        s.x = x;
        s.y = y;
        s.longeur = i - 1;
        return (0);
    }
    return (0);
}

t_tab   ft_solve(t_tab t, t_char c)
{
    int     x;
    int     y;

    y = t.y;
    while (y >= 0)
	{
		x = 0;
		while (x <= t.x)
            if (t.tab[y][x] == c.vid)
                ft_grow(t, c, x++, y);
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