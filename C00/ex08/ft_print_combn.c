/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:09:28 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/30 10:47:31 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_n(int nbr, int n)
{
	int digit;

	if (n > 1)
		ft_putnbr_n(nbr / 10, n - 1);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
	return ;
}

int		ft_setup_combn(int n)
{
	int nbr;
	int i;

	nbr = 0;
	i = 0;
	while (n)
	{
		nbr = nbr * 10 + i;
		i++;
		n--;
	}
	return (nbr);
}

int		ft_pow_10(int n)
{
	int nbr;

	nbr = 10;
	while (n > 1)
	{
		nbr = nbr * 10;
		n--;
	}
	return (nbr);
}

int		ft_check_combn(int nbr, int n)
{
	while (n > 1)
	{
		if (!(nbr / ft_pow_10(n) % 10 < nbr / ft_pow_10(n - 1) % 10))
			return (0);
		n--;
	}
	if (!(nbr / 10 % 10 < nbr % 10) && n == 1)
		return (0);
	return (1);
}

void	ft_print_combn(int n)
{
	int nbr;
	int base_nbr;
	int bound;

	if (!(n > 0 && n < 10))
		return ;
	nbr = ft_setup_combn(n);
	base_nbr = nbr;
	bound = (n == 9 ? 23456789 : 123456789 % (ft_pow_10(n)));
	while (nbr <= bound)
	{
		if (ft_check_combn(nbr, n - 1))
		{
			if (nbr != base_nbr)
				write(1, ", ", 2);
			ft_putnbr_n(nbr, n);
		}
		nbr++;
	}
	if (n == 9)
		write(1, ", 123456789", 11);
	return ;
}
