/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexp.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 13:33:29 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/06 14:42:13 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXP_H
# define EVALEXP_H

# include <unistd.h>
# include <stdlib.h>

void			ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				ft_atoi(char *str);
int				ft_cs(char c);
void			operr(char c, int *stack, int *s);
void			fn1(char *out, char *stack, int *array);
int				ret(char *out, char *stack, int *array);
int				polish(char *str);
char			*if_one(char *str, char *out, char *stack, int *array);
char			*if_2(char *str, char *out, char *stack, int *array);

#endif
