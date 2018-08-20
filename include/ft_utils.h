/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:21:40 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/20 14:00:25 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

#include <unistd.h>
#include <stdlib.h>

int		ft_display(char **tab, int x, int y);
char	**ft_change_grid(char **tab, int x, int y);
void	ft_putchar(char c);

typedef	struct		s_char
{
	char	vide;
	char	obstacle;
	char	plein;
	char	ligne;
	char	croisement;
}					t_char;

#endif
