/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 05:28:00 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/10 17:55:53 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *base)
{
	int i;
	int j;

	if (*base == '+' || *base == '-' || *base == 32
			|| (*base > 7 && *base < 13))
		return (0);
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (*base == '+' || *base == '-' || base[i] == base[j]
					|| (base[j] > 7 && base[j] < 13) || base[j] == 32)
				return (0);
			j++;
		}
		i++;
	}
	if (j <= 1)
		return (0);
	return (j);
}

char	*ft_manage_begin_str(char *str, int *sign)
{
	int i;

	i = 0;
	while ((str[i] > 7 && str[i] < 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -*sign;
		i++;
	}
	return (&str[i]);
}

int		ft_translate_nbr(char *str, char *base, int base_length)
{
	int nbr;
	int i;
	int j;

	nbr = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j])
		{
			if (!base[j])
				return (nbr);
			j++;
		}
		nbr = nbr * base_length + j;
		i++;
	}
	return (nbr);
}

int		ft_atoi_base(char *str, char *base)
{
	int sign;
	int nbr;
	int base_length;

	sign = 1;
	nbr = 0;
	base_length = ft_check_base(base);
	if (base_length <= 1)
		return (0);
	str = ft_manage_begin_str(str, &sign);
	return (ft_translate_nbr(str, base, base_length) * sign);
}
