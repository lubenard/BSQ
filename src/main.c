/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:02 by hjamet            #+#    #+#             */
/*   Updated: 2018/09/16 18:37:00 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

int		main(int argc, char **argv)
{
	char	*rep;
	int		b;
	int		i;

	b = 1;
	i = 0;
	if (argc == 1)
		b = 0;
	while (i != argc -1)
	{
		reinit_struct();
		if ((rep = the_map(argv[++i], b)) == NULL)
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
	}
	return (0);
}
