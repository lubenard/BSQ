/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_10_10.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 11:33:15 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 18:01:50 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/ft_utils.h"
#include "../../include/ft_struct.h"

int main(void)
{
	char **tab;
	if ((tab = malloc(sizeof(char) * 9 * 9)) == NULL)
		return (0);
	char liste1[] = "..o.o..o..";
	char liste2[] = "..o.o..o..";
	char liste3[] = "..o.o..o..";
	char liste4[] = "..o.o..o..";
	char liste5[] = "..o.o..o..";
	char liste6[] = "..o.o..o..";
	char liste7[] = "..o.o..o..";
	char liste8[] = "..o.o..o..";
	char liste9[] = "..o.o..o..";
	char liste10[] = "..o.o..o..";
	tab[0] = liste1;
	tab[1] = liste2;
	tab[2] = liste3;
	tab[3] = liste4;
	tab[4] = liste5;
	tab[5] = liste6;
	tab[6] = liste7;
	tab[7] = liste8;
	tab[8] = liste9;
	tab[9] = liste10;

	c.vid = '.';
	c.obs = 'o';
	c.lig = 'p';
	c.lig = 'R';
	
	t.tab = tab;
	t.x = 9;
	t.y = 9;

	ft_display(ft_change_grid(t, c));
	return (0);
}
