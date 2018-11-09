/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:01:52 by alorent-          #+#    #+#             */
/*   Updated: 2018/10/07 18:29:04 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include "ft2.h"

void	ft_rush00(char **strs, char *str, int *array)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 5)
	{
		while (array[4] > array[0]++)
		{
			while (array[3] > array[1]++)
				strs[i][j++] = g_operarray[i].f('w', array, array[3], array[4]);
			strs[i][j++] = '\n';
			array[1] = 0;
		}
		array[0] = 0;
		strs[i][j] = '\0';
		i++;
		j = 0;
	}
	ft_cmp(strs, str, array);
}

void	ft_rush02(char *str, int *array, char **strs)
{
	char *str0;
	char *str1;
	char *str2;
	char *str3;
	char *str4;

	str0 = (char*)malloc(sizeof(str) + 10);
	str1 = (char*)malloc(sizeof(str) + 10);
	str2 = (char*)malloc(sizeof(str) + 10);
	str3 = (char*)malloc(sizeof(str) + 10);
	str4 = (char*)malloc(sizeof(str) + 10);
	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	strs[4] = str4;
	ft_rush00(strs, str, array);
}

int		main(void)
{
	char	buf[1];
	char	str[100000];
	int		array[5];
	char	**strs;

	array0(array);
	while (read(0, buf, 1))
		str[array[2]++] = buf[0];
	str[array[2]] = '\0';
	ft_xy(str, array);
	if (array[3] <= 0 || array[4] <= 0 || array[3] > 2147483647 ||
		array[4] > 2147483647)
	{
		write(1, "aucune\n", 7);
		return (1);
	}
	strs = (char**)malloc(sizeof(char) * 5);
	ft_rush02(str, array, strs);
	return (0);
}
