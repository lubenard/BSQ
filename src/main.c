/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:02 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 23:05:41 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

/*
**Faire une fonction init qui reinitialise les struct + var a chaque i++
**Marche pour deux arguments mais pas pour 3 (segfault)
**Affichage des map a l'envers
**L'algo fonctionne pour la deuxieme map mais pas pour la premiere (ordre d'affichage inverse, ne pas oublier)
**Les autres caracteres que des points sont comptes comme des points
*/

int		main(int argc, char **argv)
{
	char	*rep;
	int		b;
	int		i;

	i = 0;
	b = 1;
	if (argc == 1)
		b = 0;
	while (i < argc)
	{
		if ((rep = the_map(argv[--argc], b)) == NULL)
			return (0);
		g_tab.tab = split_backslash_n(rep);
		verif_tab(g_tab.tab);
		g_c.ple = char_over(rep);
		g_c.vid = char_obs(rep);
		g_c.obs = char_empty(rep);
		g_c.tem = g_c.ple + g_c.vid + g_c.obs;
		g_tab.x = tab_width(g_tab.tab);
		if (g_tab.x < 0)
			g_tab.x = 0;
		ft_display(ft_solve());
		i++;
		if (i + 1 == argc)
			ft_putchar('\n');
	}
	return (0);
}
