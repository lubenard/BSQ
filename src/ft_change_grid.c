/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 15:36:14 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

char	**cg_sides(t_tab tabl, t_char chara)
{
	int x_var;
	int y_var;

	x_var = 0;
	y_var = 0;
	while (x_var <= tabl.x)
	{
		if (tabl.tab[0][x_var] != chara.obstacle)
			tabl.tab[0][x_var] = chara.ligne;
		if (tabl.tab[tabl.y][x_var] != chara.obstacle)
			tabl.tab[tabl.y][x_var] = chara.ligne;
		(x_var == tabl.x || x_var == 0)? tabl.tab[tabl.y][x_var++] = chara.croisement : x_var++;
	}
	while (y_var <= tabl.y)
	{
		if (tabl.tab[y_var][0] != chara.obstacle)
			tabl.tab[y_var][0] = chara.ligne;
		if (tabl.tab[y_var][tabl.x] != chara.obstacle)
			tabl.tab[y_var][tabl.x] = chara.ligne;
		y_var++;
	}
	return (tabl.tab);
}

char	**cg_lines(t_tab tabl, t_char chara, int x, int y)
{
	if (y != tabl.y)
		while (x <= tabl.x && tabl.tab[y + 1][x] != chara.obstacle)
			tabl.tab[y + 1][x++] = chara.ligne;
	if (y != tabl.y)
		while (x >= 0 && tabl.tab[y + 1][x] != chara.obstacle)
			tabl.tab[y + 1][x--] = chara.ligne;
	if (y != 0)
		while (x <= tabl.x && tabl.tab[y - 1][x] != chara.obstacle)
			tabl.tab[y - 1][x++] = chara.ligne;
	if (y != 0)
		while (x >= 0 && tabl.tab[y - 1][x] != chara.obstacle)
			tabl.tab[y - 1][x--] = chara.ligne;
	if (x != tabl.x)
		while (y <= tabl.y && tabl.tab[y][x + 1] != chara.obstacle)
			tabl.tab[y++][x + 1] = chara.ligne;
	if (x != tabl.x)
		while (y >= 0 && tabl.tab[y][x + 1] != chara.obstacle)
			tabl.tab[y--][x + 1] = chara.ligne;
	if (x != 0)
		while (y <= tabl.y && tabl.tab[y][x - 1] != chara.obstacle)
			tabl.tab[y++][x - 1] = chara.ligne;
	if (x != 0)
		while (y >= 0 && tabl.tab[y][x - 1] != chara.obstacle)
			tabl.tab[y--][x - 1] = chara.ligne;
	return (tabl.tab);
}

char	**ft_change_grid(t_tab tabl, t_char chara)
{
	cg_sides(tabl, chara);
	return (0);
}
