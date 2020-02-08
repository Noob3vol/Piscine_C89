/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 04:53:51 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/18 17:22:25 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;

	if (nb < 0)
		return (0);
	total = 1;
	while (nb)
	{
		total = total * nb;
		nb--;
	}
	return (total);
}
