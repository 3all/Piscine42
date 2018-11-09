/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq_grow_left.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 15:15:13 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/09 15:15:15 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		sqr_b2_f(char *bsq, int *nbr, char *dat, int xy)
{
	CHECK = xy + SIZE + I * (X0 + 1);
	if (CHECK >= 0 && CHECK <= (Y * (X0 + 1)) && bsq[CHECK] == dat[0])
	{
		BOOL += 1;
		I++;
	}
	else if (SIZE >= X)
	{
		if ((X == SIZE && xy < FIRSTL) || X < SIZE)
			FIRSTL = xy;
		X = SIZE;
		return (1);
	}
	else
		return (1);
	return (0);
}

int		sqr_b2_f2(char *bsq, int *nbr, char *dat, int xy)
{
	CHECK = xy + SIZE * (X0 + 1) + I;
	if (CHECK >= 0 && CHECK <= (Y * (X0 + 1)) && bsq[CHECK] == dat[0])
	{
		BOOL += 1;
		I++;
	}
	else if (SIZE >= X)
	{
		if ((X == SIZE && xy < FIRSTL) || X < SIZE)
			FIRSTL = xy;
		X = SIZE;
		return (1);
	}
	else
		return (1);
	return (0);
}

void	sqr_b2(char *bsq, int *nbr, char *dat, int xy)
{
	SIZE = BOOL;
	I = 0;
	BOOL = 0;
	while (BOOL <= SIZE)
	{
		if (sqr_b2_f(bsq, nbr, dat, xy) == 1)
			return ;
	}
	BOOL = 0;
	I = 0;
	while (BOOL < SIZE)
	{
		if (sqr_b2_f2(bsq, nbr, dat, xy) == 1)
			return ;
	}
	if (BOOL == SIZE)
	{
		BOOL += 1;
		sqr_b2(bsq, nbr, dat, xy);
	}
}
