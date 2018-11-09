/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 12:30:08 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:19:22 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int n;
	int i;
	int isneg;

	n = 0;
	i = 0;
	isneg = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\v')
			|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		isneg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = 10 * n + (str[i] - '0');
		i++;
	}
	if (isneg == 1)
		return (-n);
	return (n);
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
	return (0);
}
