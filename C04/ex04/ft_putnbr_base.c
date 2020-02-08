/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 18:59:23 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/10 17:58:41 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nbr_base(long nbr, char *base, long base_length)
{
	int		stock;

	if (nbr >= base_length)
		ft_print_nbr_base(nbr / base_length, base, base_length);
	stock = nbr % base_length;
	write(1, &base[stock], 1);
	return ;
}

int		ft_pow(int nbr, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power == 1)
		return (nbr);
	return (nbr * ft_pow(nbr, power - 1));
}

int		ft_check_base(char *base)
{
	int i;
	int j;

	if (*base == '+' || *base == '-')
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (*base == '+' || *base == '-' || base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_handle_minimum(int base_length, char *base)
{
	int first_digit_base;
	int n;
	int nbr;

	nbr = -2147483648;
	first_digit_base = nbr;
	n = 0;
	while (first_digit_base <= -base_length)
	{
		first_digit_base = first_digit_base / base_length;
		n++;
	}
	first_digit_base = -first_digit_base;
	nbr = nbr + first_digit_base * ft_pow(base_length, n);
	nbr = (nbr < 0 ? -nbr : nbr);
	write(1, &base[first_digit_base], 1);
	if (nbr == 0)
		write(1, "0000000000000000000000000000000", n - 1);
	return (nbr);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int n;
	int base_length;

	n = 0;
	base_length = 0;
	while (base[base_length])
		base_length++;
	if (!ft_check_base(base) || base_length < 2)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
			nbr = ft_handle_minimum(base_length, base);
		else
			nbr = -nbr;
	}
	ft_print_nbr_base(nbr, base, base_length);
	return ;
}
