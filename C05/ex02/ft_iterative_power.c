/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:43:05 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/18 14:43:24 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nbr, int power)
{
	int base_nbr;

	base_nbr = nbr;
	if (power < 0)
		return (0);
	if (power == 0 || nbr == 1)
		return (1);
	while (--power)
		nbr = nbr * base_nbr;
	return (nbr);
}
