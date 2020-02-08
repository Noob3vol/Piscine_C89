/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:24:38 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/17 16:25:57 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_allocate_joinedstr(int size, char **strs, int sep_length)
{
	char	*joinedstr;
	int		size_joinedstr;
	int		total_size_word;
	int		i;
	int		j;

	i = 0;
	size_joinedstr = 0;
	total_size_word = 0;
	while (strs[i] && size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
		}
		total_size_word = total_size_word + j;
		i++;
		size--;
	}
	size_joinedstr = total_size_word + ((i - 1) * sep_length);
	if (!(joinedstr = (char *)malloc(sizeof(char) * (size_joinedstr + 1))))
		return (NULL);
	return (joinedstr);
}

int		ft_strlcpy(char *dest, char *src)
{
	int j;

	j = 0;
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (j);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joinedstr;
	int		sep_length;
	int		i;
	int		strings_added;

	if (size == 0)
	{
		joinedstr = (char *)malloc(sizeof(char));
		joinedstr[0] = '\0';
		return (joinedstr);
	}
	sep_length = ft_strlen(sep);
	if (!(joinedstr = ft_allocate_joinedstr(size, strs, sep_length)))
		return (NULL);
	strings_added = 0;
	i = 0;
	while (strs && strs[strings_added] && strings_added < size)
	{
		i = i + ft_strlcpy(&joinedstr[i], strs[strings_added]);
		if (strs[strings_added + 1] && strings_added < size - 1)
			i = i + ft_strlcpy(&joinedstr[i], sep);
		strings_added++;
	}
	return (joinedstr);
}
