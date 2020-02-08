/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 04:54:05 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/15 04:54:11 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nbr)
{
	if (nbr < 0)
		return (0);
	if (nbr < 2)
		return (1);
	return (nbr * ft_recursive_factorial(nbr - 1));
}
