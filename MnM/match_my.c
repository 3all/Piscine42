/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorent- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/29 13:02:36 by alorent-          #+#    #+#             */
/*   Updated: 2018/09/29 17:12:27 by alorent-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		match(char *s1, char *s2)
{
	int	i;
	int	j;
	int save_i;
	int save_j;

	i = 0;
	j = 0;
	save_i = 0;
	save_j = 0;
	if (s2[j] == '\0')
		return (0);
	while (s2[j] != '\0' && s1[i] != '\0')
	{
		if (s2[j] == '*')
		{
			if (s2[j + 1] == '\0')
				return (1);
			j++;
			i = save_i;
			save_j = j;
		}
		else if (s1[i] == s2[j])
		{
			i++;
			j++;
			save_i = i;
		}
		else if (s1[i] != s2[j] && save_j != j)
		{
			j = save_j;
			i = save_i;
		}
		else
		{
			if (j == 0)
				return (0);
			i++;
		}
	}
	if (s2[j] == '\0' && s1[i] == '\0')
		return (1);
	else
		return (0);
}
