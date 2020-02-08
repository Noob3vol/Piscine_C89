/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 08:56:33 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/18 17:58:55 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	divisor = 2;
	while (divisor <= nb / divisor)
	{
		if (!(nb % divisor))
			return (0);
		divisor++;
	}
	return (1);
}
