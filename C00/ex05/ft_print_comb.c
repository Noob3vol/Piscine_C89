/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 19:23:48 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/29 13:15:43 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putcomb(int nbr)
{
	ft_putchar(nbr / 100 + '0');
	ft_putchar(nbr / 10 % 10 + '0');
	ft_putchar(nbr % 10 + '0');
	if (nbr != 789)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return ;
}

int		ft_check_comb(int nbr)
{
	if (!(nbr / 100 < nbr / 10 % 10 && nbr / 10 % 10 < nbr % 10))
		return (0);
	return (1);
}

void	ft_print_comb(void)
{
	int nbr;

	nbr = 12;
	while (nbr <= 789)
	{
		if (ft_check_comb(nbr))
		{
			ft_putcomb(nbr);
		}
		nbr = nbr + 1;
	}
	return ;
}
