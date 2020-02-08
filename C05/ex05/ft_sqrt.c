/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:44:01 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/18 17:40:11 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int square;

	square = 1;
	if (nb == 1)
		return (1);
	while (square <= nb / square && square <= 46340)
	{
		if (square * square == nb)
			return (square);
		square++;
	}
	return (0);
}
