/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:34:49 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 19:34:53 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include "evalexp.h"
#include <stdio.h>

void	operr(char c, int *stack, int *s)
{
	int		r;

	r = 0;
	while (r < 5)
	{
		if (g_operarray[r].oper == c)
		{
			stack[*s - 2] = g_operarray[r].f(stack[*s - 2], stack[*s - 1]);
			*s = *s - 1;
		}
		r++;
	}
}

void	fn1(char *out, char *stack, int *array)
{
	out[array[0]++] = stack[array[1] - 2];
	out[array[0]++] = ' ';
	array[1] = array[1] - 2;
	stack[array[1]] = ' ';
}

int		ret(char *out, char *stack, int *array)
{
	while (array[1] != 0)
	{
		out[array[0]++] = stack[array[1] - 2];
		out[array[0]++] = ' ';
		array[1] = array[1] - 2;
	}
	out[array[0]] = '\0';
	array[0] = polish(out);
	free(out);
	free(stack);
	return (array[0]);
}
