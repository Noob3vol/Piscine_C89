/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 14:10:56 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/06 01:40:50 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_substrcmp(char *substring, char *to_find)
{
	int i;

	i = 0;
	while (substring[i] == to_find[i] && substring[i])
		i++;
	if (!to_find[i])
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
	if (!*to_find)
		return (str);
	if (!*str)
		return (0);
	while (str[i])
	{
		if (str[i] == *to_find && str[i])
		{
			if (ft_substrcmp(&str[i], to_find))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
