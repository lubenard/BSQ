/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_aff_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:18:10 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 11:05:28 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_display(char **tab, int x, int y)
{
	int x_var;

	while (y >= 0)
	{
		x_var = 0;
		while (x_var <= x)
			ft_putchar(tab[y][x_var++]);
		ft_putchar('\n');
		y--;
	}
	return (0);
}
