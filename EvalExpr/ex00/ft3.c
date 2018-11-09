/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft3.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:09:27 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 20:55:52 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "evalexp.h"

char	*if_one(char *str, char *out, char *stack, int *array)
{
	if (*str == ' ')
		str++;
	else if (*str == '(')
	{
		stack[array[1]++] = '(';
		stack[array[1]++] = ' ';
		str++;
	}
	else if ((*str <= '9' && *str >= '0') || ((*str == '-') &&
					*(str + 1) >= '0' && *(str + 1) <= '9'))
	{
		while (*str != ' ' && *str != ')' && *str != '\0')
			out[array[0]++] = *str++;
		out[array[0]++] = ' ';
	}
	return (str);
}

char	*if_2(char *str, char *out, char *stack, int *array)
{
	char	*del;

	del = "122333";
	if (ft_cs(*str) && *(str + 1) == ' ')
	{
		if (array[1] == 0 || del[ft_cs(stack[array[1] - 2])] < del[ft_cs(*str)])
		{
			stack[array[1]++] = *str;
			stack[array[1]++] = ' ';
		}
		else
			while (array[1] != 0 && del[ft_cs(stack[array[1] - 2])]
						>= del[ft_cs(*str)])
				fn1(out, stack, array);
		if (array[1] == 0 || del[ft_cs(stack[array[1] - 2])] < del[ft_cs(*str)])
		{
			stack[array[1]++] = *str;
			stack[array[1]++] = ' ';
		}
		str++;
	}
	return (str);
}
