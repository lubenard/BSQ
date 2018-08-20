/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_aff_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:18:10 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 17:58:25 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

int		ft_display(t_tab t)
{
	int x_var;

	while (t.y >= 0)
	{
		x_var = 0;
		while (x_var <= t.x)
			ft_putchar(t.tab[t.y][x_var++]);
		ft_putchar('\n');
		t.y--;
	}
	return (0);
}
