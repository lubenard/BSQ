/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 18:05:02 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 18:32:11 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

int		main(int argc, char **argv)
{
	char	*rep;

	(void)argc;
	rep = the_map(*argv);
	t.tab = split_backslash_n(rep);
	c.ple = char_over(rep);
	c.vid = char_empty(rep);
	c.obs = char_obs(rep);
	c.tem = c.ple + c.vid + c.obs;
	t.x = tab_width(t.tab);
	t.y = tab_height(t.tab);

	ft_display(ft_solve());
	return (0);
}
