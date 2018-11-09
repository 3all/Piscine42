/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushs00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:12:41 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:23:13 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	change00(char c, int *array, int x, int y)
{
	if ((array[0] == 1 && array[1] == x) || (array[0] == y && array[1] == 1))
		c = 'o';
	else if ((array[0] != 1 && array[0] != y) &&
					(array[1] == 1 || array[1] == x))
		c = '|';
	else if ((array[0] == y && array[1] == x) ||
					(array[0] == 1 && array[1] == 1))
		c = 'o';
	else if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		c = ' ';
	else
		c = '-';
	return (c);
}

char	change01(char c, int *array, int x, int y)
{
	if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		c = ' ';
	else if (array[0] == 1 && array[1] == 1)
		c = '/';
	else if ((array[0] == 1 && array[1] == x) ||
					(array[0] == y && array[1] == 1))
		c = '\\';
	else if (array[0] == y && array[1] == x)
		c = '/';
	else
		c = '*';
	return (c);
}

char	change02(char c, int *array, int x, int y)
{
	if (array[0] == 1 && array[1] == 1)
		c = 'A';
	else if (array[0] == y && array[1] == 1)
		c = 'C';
	else if (array[0] == 1 && array[1] == x)
		c = 'A';
	else if (array[0] == y && array[1] == x)
		c = 'C';
	else if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		c = ' ';
	else
		c = 'B';
	return (c);
}

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
