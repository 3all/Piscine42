/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 11:48:59 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 18:08:34 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexp.h"

int		ft_strn2(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i] && str[i] != ' ')
	{
		if ((str[i] <= '9' && str[i] >= '0') || (str[i + 1] <= '9' &&
				str[i + 1] >= '0' && str[i] == '-'))
			res++;
		i++;
	}
	return (res);
}

int		ft_strn(char *str)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] <= '9' && str[i] >= '0')
			res++;
		i++;
	}
	return (res);
}

int		polish(char *str)
{
	int		s;
	int		*stack;

	s = 0;
	stack = (int*)malloc(sizeof(int) * (ft_strn(str)));
	while (*str)
	{
		(*str == ' ') && (str++);
		if ((*str <= '9' && *str >= '0') || (*(str + 1) <= '9' &&
					*(str + 1) >= '0' && *str == '-'))
		{
			stack[s++] = ft_atoi(str);
			str += ft_strn2(str);
		}
		else if (ft_cs(*str))
		{
			operr(*str, stack, &s);
			str++;
		}
	}
	s = stack[0];
	free(stack);
	return (s);
}

int		eval_expr(char *str)
{
	char	*out;
	char	*stack;
	int		array[2];

	array[0] = 0;
	array[1] = 0;
	out = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	stack = (char*)malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!out || !stack)
		return (0);
	while (*str)
	{
		str = if_one(str, out, stack, array);
		str = if_2(str, out, stack, array);
		if (*str == ')')
		{
			while (stack[array[1] - 2] != '(')
				fn1(out, stack, array);
			array[1] -= 2;
			stack[array[1]] = ' ';
			str++;
		}
	}
	return (ret(out, stack, array));
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
