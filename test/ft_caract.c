/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_caract.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 16:46:57 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/21 18:36:12 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

char	char_over(char *str)
{
	char	over;
	int		i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		++i;
	over = str[i];
	return (over);
}

char	char_empty(char *str)
{
	char	empty;
	int		i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		++i;
	empty = str[i + 1];
	return (empty);
}

char	char_obs(char *str)
{
	char	obs;
	int		i;

	i = 0;
	while (str[i] >= 0 && str[i] <= 9)
		++i;
	obs = str[i + 2];
	return (obs);
}

int		tab_width(char **tab)
{
	int		i;

	i = ft_strlen(tab[0]);
	return (i - 1);
}

int		tab_height(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		++i;
	return (i - 1);
}
