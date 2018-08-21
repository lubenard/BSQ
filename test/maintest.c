/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:02 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 21:46:16 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		main(int argc, char **argv)
{
	char	*rep;

	(void)argc;
	rep = the_map(*argv);
	g_tab.tab = split_backslash_n(rep);
	g_c.ple = char_over(rep);
	g_c.vid = char_empty(rep);
	g_c.obs = char_obs(rep);
	g_c.tem = g_c.ple + g_c.vid + g_c.obs;
	g_tab.x = tab_width(g_tab.tab);
	g_tab.y = tab_height(g_tab.tab);

	ft_display(ft_solve());
	return (0);
}