/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:46:49 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:22:02 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	change04(char c, int *array, int x, int y)
{
	if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		c = ' ';
	else if (array[0] == 1 && array[1] == 1)
		c = 'A';
	else if ((array[0] == 1 && array[1] == x) ||
					(array[0] == y && array[1] == 1))
		c = 'C';
	else if (array[0] == y && array[1] == x)
		c = 'A';
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
			c = change04(c, array, x, y);
			ft_putchar(c);
		}
		array[1] = 0;
		ft_putchar('\n');
	}
	return (0);
}
