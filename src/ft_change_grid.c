/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 13:42:39 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

char	**cg_sides(char **tab, int x, int y, char obj)
{
	int x_var;
	int y_var;

	x_var = 0;
	y_var = 0;
	while (x_var <= x)
	{
		if (tab[0][x_var] != obj)
			tab[0][x_var] = 'p';
		if (tab[y][x_var] != obj)
			tab[y][x_var] = 'p';
		x_var++;
	}
	while (y_var <= y)
	{
		if (tab[y_var][0] != 'o')
			tab[y_var][0] = 'p';
		if (tab[y_var][x] != 'o')
			tab[y_var][x] = 'p';
		y_var++;
	}
	return (tab);
}

char	**cg_plines(char **tab, int x, int y, )

char	**ft_change_grid(char **tab, int x, int y, char obj)
{
	cg_sides(tab, x, y, obj);
	return (0);
}
