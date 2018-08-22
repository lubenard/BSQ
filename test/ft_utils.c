/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:44:46 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 14:15:29 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

int		ft_display(void)
{
	int x_var;

	while (g_tab.y >= 0)
	{
		x_var = g_tab.x;
		while (x_var >= 0)
		{
			if (g_tab.tab[g_tab.y][x_var] == g_c.tem)
				g_tab.tab[g_tab.y][x_var] = g_c.vid;
			x_var--;
		}
		write(1, g_tab.tab[g_tab.y], g_tab.x + 1);
		ft_putchar('\n');
		g_tab.y--;
	}
	ft_putchar('\n');
	return (0);
}
