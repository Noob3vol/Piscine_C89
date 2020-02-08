/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:25:48 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/30 04:59:33 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_put_comb2(char nbr1_i1, char nbr1_i2, char nbr2_i1, char nbr2_i2)
{
	write(1, &nbr1_i1, 1);
	write(1, &nbr1_i2, 1);
	ft_putchar(' ');
	write(1, &nbr2_i1, 1);
	write(1, &nbr2_i2, 1);
	ft_putchar(',');
	ft_putchar(' ');
	return ;
}

void	ft_print_comb2(void)
{
	int nbr1;
	int nbr2;

	nbr1 = 0;
	while (nbr1 < 98)
	{
		nbr2 = nbr1 + 1;
		while (nbr2 <= 99)
		{
			ft_put_comb2(nbr1 / 10 + '0', nbr1 % 10 + '0'
					, nbr2 / 10 + '0', nbr2 % 10 + '0');
			nbr2++;
		}
		nbr1++;
	}
	write(1, "98 99", 5);
	return ;
}
