/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjamet <hjamet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 14:14:03 by hjamet            #+#    #+#             */
/*   Updated: 2018/08/22 17:39:02 by hjamet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*word_copy(char *src)
{
	int		index;
	char	*output;

	index = 0;
	while (src[index] > 32)
		index++;
	output = malloc(sizeof(char) * (index + 1));
	if (output == NULL)
		return (NULL);
	index = 0;
	while (src[index] > 32)
	{
		output[index] = src[index];
		index++;
	}
	output[index] = '\0';
	return (output);
}

int		words_num(char *str)
{
	int		index;
	int		n;

	index = 0;
	n = 0;
	while (str[index])
	{
		if (str[index] > 32)
		{
			n++;
			while (str[index] > 32)
				index++;
		}
		else
			index++;
	}
	return (n + 1);
}

char	**ft_split_whitespaces(char *str)
{
	char	**output;
	int		index;
	int		x;

	if ((output = malloc(sizeof(char*) * words_num(str))) == NULL)
		return (NULL);
	x = 0;
	index = 0;
	while (str[index])
	{
		if (str[index] > 32)
		{
			output[x] = word_copy(str + index);
			if (output[x] == NULL)
				return (NULL);
			while (str[index] > 32)
				index++;
			x++;
		}
		else
			index++;
	}
	output[x] = 0;
	return (output);
}
