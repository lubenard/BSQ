/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:21:40 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/21 18:39:13 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

# define BUF_SIZE 4096

typedef	struct		s_char
{
	char	vid;
	char	obs;
	char	ple;
	char	tem;
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

char	*ft_realloc(char *str, int size);
char	*the_map(char *argv);
char	**split_backslash_n(char *str);
char	**split_backslash_n2(char *str, int i, char a, char b, char c);
int		verif(char a, char b, char c, char trys);
int		count_word(char *str);
int		count_word(char *str);
char	char_over(char *str);
char	char_empty(char *str);
char	char_obs(char *str);
int		tab_width(char **tab);
int		tab_height(char **tab);
void	error(void);
char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);

#endif