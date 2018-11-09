/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:43:16 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:21:18 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	change03(char c, int *array, int x, int y)
{
	if ((array[0] == 1 && array[1] == 1) || (array[0] == y && array[1] == 1))
		c = 'A';
	else if ((array[0] == y && array[1] == x) ||
					(array[0] == 1 && array[1] == x))
		c = 'C';
	else if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		c = ' ';
	else
		c = 'B';
	return (c);
}

int		rush(int x, int y)
{
	int		array[2];
	char	c;

	c = 'B';
	array[0] = 0;
	array[1] = 0;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
		return (0);
	while (y > array[0]++)
	{
		while (x > array[1]++)
		{
			c = change03(c, array, x, y);
			ft_putchar(c);
		}
		array[1] = 0;
		ft_putchar('\n');
	}
	return (0);
}
