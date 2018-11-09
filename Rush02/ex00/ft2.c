/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:35:12 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:43:45 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_write(char *name, int x, int y, int *i)
{
	if (*i != 0)
	{
		write(1, " || ", 4);
	}
	*i = 1;
	write(1, "[", 1);
	write(1, name, ft_strlen(name));
	write(1, "] [", 3);
	ft_putnbr(x);
	write(1, "] [", 3);
	ft_putnbr(y);
	write(1, "]", 1);
}

void	ft_cmp(char **strs, char *str, int *array)
{
	int		i;

	i = 0;
	if (ft_strcmp(strs[0], str) == 0)
		ft_write("colle-00", array[3], array[4], &i);
	if (ft_strcmp(strs[1], str) == 0)
		ft_write("colle-01", array[3], array[4], &i);
	if (ft_strcmp(strs[2], str) == 0)
		ft_write("colle-02", array[3], array[4], &i);
	if (ft_strcmp(strs[3], str) == 0)
		ft_write("colle-03", array[3], array[4], &i);
	if (ft_strcmp(strs[4], str) == 0)
		ft_write("colle-04", array[3], array[4], &i);
	if (i == 0)
		write(1, "aucune", 7);
	write(1, "\n", 1);
}

void	array0(int array[5])
{
	int		i;

	i = 0;
	while (i < 5)
	{
		array[i++] = 0;
	}
}

void	ft_xy(char *str, int *array)
{
	int		i;
	int		b;

	i = 0;
	b = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
		{
			b = 1;
			array[4]++;
		}
		if (b == 0)
			array[3]++;
		i++;
	}
}
