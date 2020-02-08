/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:58:27 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/19 14:58:30 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strchar(char c, char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

int		ft_size_w(char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (ft_strchar(str[i], charset) && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

int		ft_count_word(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != 0)
	{
		if (ft_strchar(str[i], charset) != -1)
			i++;
		else
		{
			count++;
			while (ft_strchar(str[i], charset) == -1 && str[i] != 0)
			{
				i++;
			}
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	k = 0;
	i = 0;
	if (!(tab = malloc(sizeof(char *) * (ft_count_word(str, charset) + 1))))
		return (0);
	while (i < ft_count_word(str, charset) && str[0] != 0)
	{
		j = 0;
		while (ft_strchar(str[k], charset) != -1 && str[k] != 0)
			k++;
		if (!(tab[i] = malloc(sizeof(char) * (ft_size_w(str, k, charset) + 1))))
			return (0);
		while (ft_strchar(str[k], charset) == -1 && str[k] != 0)
			tab[i][j++] = str[k++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
