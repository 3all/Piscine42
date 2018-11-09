/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:35:56 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 14:45:10 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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

int		ft_cs(char c)
{
	int		j;
	char	*to_find;

	j = 0;
	to_find = "(+-*/%";
	if (to_find[0] == '\0')
		return (0);
	while (to_find[j] != '\0')
	{
		if (c == to_find[j])
			return (j);
		j++;
	}
	return (0);
}
