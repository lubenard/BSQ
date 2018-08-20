/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_grille.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 09:56:32 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 10:17:13 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_change_grille(char **tab, int x, int y)
{
	int x_var;
	int y_var;

	x_var = 0;
	y_var = 0;
	while (x_var <= x)
	{
		if (tab[x_var][0] != 'o')
			tab[x_var][0] = 'p';
		if (tab[x_var][y] != 'o')
			tab[x_var][y] = 'p';
		x++;
	}
	while (y_var <= y)
	{
		if (tab[0][y_var] != 'o')
			tab[0][y_var] = 'p';
		if (tab[x][y_var] != 'o')
			tab[x][y_var] = 'p';
		x++;
	}
	while (x_var <= x)
	{
		while(y_var <= y)
		{
			if (tab[x][y] == 'o')
				
			x_var++;
		}
	}
}
