/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   realloc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 17:12:57 by atyczyns          #+#    #+#             */
/*   Updated: 2018/08/22 01:07:32 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

char	*ft_realloc(char *str, int size)
{
	char	*rep;
	int		i;

	i = ft_strlen(str);
	if (!(rep = (char*)malloc(sizeof(char) * (size + ft_strlen(str)))))
		return (NULL);
	while (++i < size)
		rep[i] = 0;
	i = 0;
	while (str[i])
	{
		rep[i] = str[i];
		++i;
	}
	free(str);
	str = NULL;
	return (rep);
}

void	init(char *str)
{
	int i;

	i = -1;
	while (++i < ft_strlen(str))
		str[i] = '\0';
}

char	*the_map(char argv[1])
{
	int		fd;
	int		fail;
	char	buf[BUF_SIZE + 1];
	char	*rep;

	if (!(rep = malloc(sizeof(char) * (BUF_SIZE + 1))))
		return (NULL);
	init(rep);
	if ((fd = open(argv, O_RDONLY)) == (-1))
	{
		printf("%d", 1);
		error();
	}
	while ((fail = read(fd, buf, BUF_SIZE)))
	{
		if (fail == (-1))
		{
			printf("%d", 2);
			error();
		}
		buf[fail] = '\0';
		rep = ft_strcat(rep, buf);
		rep = ft_realloc(rep, fail + BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		printf("%d", 3);
		error();
	}
	return (rep);
}
