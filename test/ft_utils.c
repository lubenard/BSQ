/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:44:46 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 00:44:16 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_struct.h"

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

int		ft_display(t_tab t)
{
	while (g_tab.y >= 0)
	{
		write(1, g_tab.tab[g_tab.y], g_tab.x + 1);
		ft_putchar('\n');
		g_tab.y--;
	}
	ft_putchar('\n');
	return (0);
}
