/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reinit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lubenard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 18:28:09 by luca              #+#    #+#             */
/*   Updated: 2018/09/15 19:25:49 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_struct.h"

void	reinit_t_char(void)
{
	g_c.vid = 0;
	g_c.obs = 0;
	g_c.ple = 0;
	g_c.tem = 0;
}

void	reinit_t_tab(void)
{
	g_tab.tab = 0;
	g_tab.x   = 0;
	g_tab.y   = 0;
}

void	reinit_t_sol(void)
{
	g_s.longeur = 0;
	g_s.x       = 0;
	g_s.y       = 0;
}

void	reinit_struct(void)
{
	reinit_t_char();
	reinit_t_tab();
	reinit_t_sol();
}
