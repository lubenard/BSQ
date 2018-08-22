/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_10_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:33:15 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 14:15:23 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_struct.h"

int main(void)
{
	char **tab;
	if ((tab = malloc(sizeof(char) * 9 * 9)) == NULL)
		return (0);
	char liste1[] = "..........";
	char liste2[] = "...o...o..";
	char liste3[] = ".......o..";
	char liste4[] = "..o.......";
	char liste5[] = "..........";
	char liste6[] = "o......o..";
	char liste7[] = "..........";
	char liste8[] = "..o....o..";
	char liste9[] = "..........";
	char liste10[] = "..........";
	tab[9] = liste1;
	tab[8] = liste2;
	tab[7] = liste3;
	tab[6] = liste4;
	tab[5] = liste5;
	tab[4] = liste6;
	tab[3] = liste7;
	tab[2] = liste8;
	tab[1] = liste9;
	tab[0] = liste10;

	g_c.ple = 'F';
	g_c.vid = '.';
	g_c.obs = 'o';
	g_c.tem = 'T';
	g_tab.tab = tab;
	g_tab.x = 9;
	g_tab.y = 9;

	ft_solve();
	ft_display();
	return (0);
}
