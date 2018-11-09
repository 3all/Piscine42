/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:53:36 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:42:49 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

char	change00(char c, int *array, int x, int y);
char	change01(char c, int *array, int x, int y);
char	change02(char c, int *array, int x, int y);
char	change03(char c, int *array, int x, int y);
char	change04(char c, int *array, int x, int y);
void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_strcmp(char *s1, char *s2);
void	ft_write(char *name, int x, int y, int *i);
void	ft_cmp(char **strs, char *str, int *array);
void	array0(int array[5]);
void	ft_xy(char *str, int *array);

#endif
