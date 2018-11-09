/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:46:49 by alorent-          #+#    #+#             */
/*   Updated: 2018/09/22 16:48:02 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	change(char *c, int *array, int x, int y);

int		rush(int x, int y)
{
	int		array[2];
	char	c;

	c = 'B';
	array[0] = 0;
	array[1] = 0;
	while (y > array[0]++)
	{
		while (x > array[1]++)
		{
			change(&c, array, x, y);
		}
		array[1] = 0;
		ft_putchar('\n');
	}
	return (0);
}

void	change(char *c, int *array, int x, int y)
{
	if (array[0] == y && array[1] == x)
		*c = 'A';
	if ((array[0] == 1 && array[1] == x) || (array[0] == y && array[1] == 1))
		*c = 'C';
	if (array[0] == 1 && array[1] == 1)
		*c = 'A';
	if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		*c = ' ';
	ft_putchar(*c);
	*c = 'B';
}
