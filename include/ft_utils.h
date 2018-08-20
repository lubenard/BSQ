/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:21:40 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 18:01:51 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

#include <unistd.h>
#include <stdlib.h>

typedef	struct		s_char
{
	char	vid;
	char	obs;
	char	ple;
	char	lig;
	char	coi;
}					t_char;

typedef	struct		s_tab
{
	char	**tab;
	int		x;
	int		y;
}					t_tab;

int		ft_display(t_tab tableau);
t_tab	ft_change_grid(t_tab tableau, t_char characters);
void	ft_putchar(char c);

#endif
