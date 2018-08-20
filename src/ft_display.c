/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_aff_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:18:10 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 14:39:10 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

int		ft_display(t_tab tableau)
{
	int x_var;

	while (tableau.y >= 0)
	{
		x_var = 0;
		while (x_var <= tableau.x)
			ft_putchar(tableau.tab[tableau.y][x_var++]);
		ft_putchar('\n');
		tableau.y--;
	}
	return (0);
}
