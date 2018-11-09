/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 15:46:47 by arau              #+#    #+#             */
/*   Updated: 2018/09/30 20:31:44 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			validate(char numbers[9][9], int row, int col, char value)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		if ((numbers[i][col] == value) || (numbers[row][i] == value))
			return (0);
		i += 1;
	}
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			if (numbers[row - (row % 3) + i][col - (col % 3) + j] == value)
				return (0);
			j += 1;
		}
		i += 1;
	}
	return (1);
}

int			solve_sudoku(char numbers[9][9], int value)
{
	char	i;
	int		x;
	int		y;

	i = '1';
	x = value / 9;
	y = value % 9;
	if (value == 81)
		return (1);
	if (numbers[x][y] != '.')
		return (solve_sudoku(numbers, value + 1));
	while (i <= '9')
	{
		if (validate(numbers, x, y, i))
		{
			numbers[x][y] = i;
			if (solve_sudoku(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = '.';
		}
		i++;
	}
	return (0);
}

void		first_add(char numbers[9][9])
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
			numbers[i][j] = '.';
	}
}
