/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:44:46 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 14:07:00 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_utils.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_display(t_tab t)
{
	while (t.y >= 0)
	{
		write(1, t.tab[t.y], t.x + 1);
		ft_putchar('\n');
		t.y--;
	}
	ft_putchar('\n');
	return (0);
}
