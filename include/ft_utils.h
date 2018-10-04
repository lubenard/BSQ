/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 10:21:40 by hjamet            #+#    #+#             */
/*   Updated: 2018/09/15 19:30:17 by luca             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define BUF_SIZE 4096

typedef	struct	s_char
{
	char		vid;
	char		obs;
	char		ple;
	char		tem;
}				t_char;

typedef	struct	s_tab
{
	char		**tab;
	int			x;
	int			y;
}				t_tab;

typedef struct	s_sol
{
	int			longeur;
	int			x;
	int			y;
}				t_sol;

int				ft_display(t_tab t);
void			ft_putchar(char c);
t_tab			ft_solve(void);
char			*word_copy(char *src);
int				words_num(char *str);
char			*ft_realloc(char *str, int size);
char			*the_map(char argv[1], int a);
char			**split_backslash_n(char *str);
char			**split_backslash_n2(char *str, int i, char a, char b);
int				verif(char a, char b, char c, char trys);
char			char_over(char *str);
char			char_empty(char *str);
char			char_obs(char *str);
int				tab_width(char **tab);
int				tab_height(char **tab);
void			error(void);
char			*ft_strcat(char *dest, char *src);
int				ft_strlen(char *str);
void			verif_tab(char **tab);
void			reinit_struct(void);
void			fill_tab(char *rep);
#endif
