/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_10_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:33:15 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 16:54:31 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_struct.h"

int main(void)
{
	char **tab;
	if ((tab = malloc(sizeof(char) * 9 * 9)) == NULL)
		return (0);
	char liste1[] = "..........";
	char liste2[] = "..........";
	char liste3[] = "..........";
	char liste4[] = "..........";
	char liste5[] = "..........";
	char liste6[] = "..........";
	char liste7[] = "..........";
	char liste8[] = "..........";
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

	c.ple = 'F';
	c.vid = '.';
	c.obs = 'o';
	c.tem = 'T';
	t.tab = tab;
	t.x = 9;
	t.y = 9;

	ft_display(ft_solve());
	return (0);
}
