/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:21:40 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 10:08:06 by hjamet           ###   ########.fr       */
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

typedef struct		s_sol
{
	int 	x;
	int 	y;
	int		longeur;
}					t_sol;

int		ft_display(t_tab t);
void	ft_putchar(char c);
t_tab	ft_solve(void);

#endif
