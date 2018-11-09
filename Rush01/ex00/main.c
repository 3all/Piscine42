/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arau <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 14:35:01 by arau              #+#    #+#             */
/*   Updated: 2018/09/30 20:30:11 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		solve_sudoku(char numbers[9][9], int val);
int		validate(char numbers[9][9], int row, int col, char value);
void	first_add(char numbers[9][9]);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	display_numbers(char numbers[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(numbers[i][j]);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int		read_numbers(char **argv, char numbers[9][9], int *count)
{
	int i;
	int j;

	i = -1;
	while (++i < 9)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		j = -1;
		while (++j < 9)
		{
			if (argv[i][j] == '.')
				numbers[i][j] = '.';
			else if (argv[i][j] >= '1' && argv[i][j] <= '9')
			{
				*count = *count + 1;
				if (!(validate(numbers, i, j, argv[i][j])))
					return (0);
				numbers[i][j] = argv[i][j];
			}
			else
				return (0);
		}
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	numbers[9][9];
	int		count;

	count = 0;
	first_add(numbers);
	if (argc == 10)
	{
		if (!(read_numbers(&argv[1], numbers, &count)))
			write(1, "Error\n", 6);
		else if (count < 17)
			write(1, "Error\n", 6);
		else if (solve_sudoku(numbers, 0))
			display_numbers(numbers);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
