/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 19:36:11 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 19:36:13 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

int				ft_plus(int a, int b);
int				ft_minus(int a, int b);
int				ft_mult(int a, int b);
int				ft_div(int a, int b);
int				ft_module(int a, int b);

typedef struct	s_oper
{
	char		oper;
	int			(*f)(int nb1, int nb2);
}				t_oper;

t_oper			g_operarray[] =
{
	{'+', &ft_plus},
	{'-', &ft_minus},
	{'*', &ft_mult},
	{'/', &ft_div},
	{'%', &ft_module}
};

#endif
