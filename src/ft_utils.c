/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:44:46 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 00:03:30 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_display(t_tab t)
{
	int x_var;

	while (t.y >= 0)
	{
		x_var = 0;
		while (x_var <= t.x)
			ft_putchar(t.tab[t.y][x_var++]);
		ft_putchar('\n');
		t.y--;
	}
	return (0);
}
