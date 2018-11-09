/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft2.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:39:31 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:40:09 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT2_H
# define FT2_H

typedef struct	s_oper
{
	int			oper;
	char		(*f)(char c, int *array, int x, int y);
}				t_oper;

t_oper			g_operarray[] =
{
	{0, &change00},
	{1, &change01},
	{2, &change02},
	{3, &change03},
	{4, &change04}
};

#endif
