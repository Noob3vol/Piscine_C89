/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 18:10:39 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/30 23:29:53 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putdigit(int nbr)
{
	char digit;

	if (nbr >= 10)
	{
		write(1, "error : nbr is not digit", 25);
		return ;
	}
	digit = (char)(nbr + '0');
	write(1, &digit, 1);
	return ;
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb == -2147483648)
			write(1, "2", 1);
		nb = (nb == -2147483648 ? 147483648 : -nb);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	return (ft_putdigit(nb % 10));
}
