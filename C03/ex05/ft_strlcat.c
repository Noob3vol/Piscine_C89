/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 02:24:53 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/06 02:24:55 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcat(char *str, char *to_find, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (str[i] && i < size)
		i++;
	while (to_find[j] && i + j + 1 < size)
	{
		str[i + j] = to_find[j];
		j++;
		str[i + j] = '\0';
	}
	while (to_find[j])
		j++;
	return (i + j);
}
