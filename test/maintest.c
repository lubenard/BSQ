/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:02 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 17:53:37 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		main(int argc, char **argv)
{
	char	*rep;

	(void)argc;
	if ((rep = the_map(argv[1])) == NULL)
		return (0);
	g_tab.tab = split_backslash_n(rep);
	g_c.ple = char_over(rep);
	g_c.vid = char_obs(rep);
	g_c.obs = char_empty(rep);
	g_c.tem = g_c.ple + g_c.vid + g_c.obs;
	g_tab.x = tab_width(g_tab.tab);

//	ft_display(g_tab);
	ft_display(ft_solve());
	return (0);
}
