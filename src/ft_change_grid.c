/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 13:18:29 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

char	**ft_change_grid(char **tab, int x, int y)
{
	int x_var;
	int y_var;

	x_var = 0;
	y_var = 0;
	while (x_var <= x)
	{
		if (tab[0][x_var] != 'o')
			tab[0][x_var] = 'p';
		if (tab[y][x_var] != 'o')
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
	while (x_var <= x)
	{
		while(y_var <= y)
		{
			if (tab[x][y] == 'o')
				
			x_var++;
		}
	}
	return (0);
}
