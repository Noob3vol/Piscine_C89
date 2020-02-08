/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 04:03:48 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/19 15:00:46 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*nb_array;
	int	i;

	i = 0;
	if (min >= max || !(nb_array = malloc(sizeof(int) * max - min)))
		return (0);
	while (min < max)
	{
		nb_array[i] = min;
		min++;
		i++;
	}
	return (nb_array);
}
