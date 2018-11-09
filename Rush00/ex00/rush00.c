/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:22:55 by alorent-          #+#    #+#             */
/*   Updated: 2018/09/22 16:53:48 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	change(char *c, int *array, int x, int y);

int		rush(int x, int y)
{
	int		array[2];
	char	c;

	c = '-';
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
	if ((array[0] == y && array[1] == x) || (array[0] == 1 && array[1] == 1))
		*c = 'o';
	if ((array[0] != 1 && array[0] != y) && (array[1] == 1 || array[1] == x))
		*c = '|';
	if ((array[0] == 1 && array[1] == x) || (array[0] == y && array[1] == 1))
		*c = 'o';
	if (array[0] != 1 && array[0] != y && array[1] != 1 && array[1] != x)
		*c = ' ';
	ft_putchar(*c);
	*c = '-';
}
