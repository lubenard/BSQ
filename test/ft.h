/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atyczyns <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 10:00:04 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 00:43:34 by atyczyns         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 4096
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

void			ft_putchar(char c);
void			error(void);
char			*ft_realloc(char *str, int size);
char			*ft_strcat(char *dest, char *src);
int				ft_strlen(char *str);
typedef struct	s_reader
{
	int x;
	int y;
}				t_reader;

#endif
