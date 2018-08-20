/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 14:46:31 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

char	**cg_sides(t_tab tableau, t_char characters)
{
	int x_var;
	int y_var;

	x_var = 0;
	y_var = 0;
	while (x_var <= tableau.x)
	{
		if (tableau.tab[0][x_var] != characters.obstacle)
			tableau.tab[0][x_var] = characters.ligne;
		if (tableau.tab[tableau.y][x_var] != characters.obstacle)
			tableau.tab[tableau.y][x_var] = characters.ligne;
		x_var++;
	}
	while (y_var <= tableau.y)
	{
		if (tableau.tab[y_var][0] != characters.obstacle)
			tableau.tab[y_var][0] = characters.ligne;
		if (tableau.tab[y_var][tableau.x] != characters.obstacle)
			tableau.tab[y_var][tableau.x] = characters.ligne;
		y_var++;
	}
	return (tableau.tab);
}

char	**cg_lines(t_tab tableau, t_char characters, int x, int y)
{
	
}

char	**ft_change_grid(t_tab tableau, t_char characters)
{
	cg_sides(tableau, characters);
	return (0);
}
