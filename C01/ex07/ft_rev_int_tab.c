/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:36:12 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/30 11:36:15 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int stock;

	i = 0;
	j = size - 1;
	while (i < size / 2)
	{
		stock = tab[i];
		tab[i] = tab[j];
		tab[j] = stock;
		i++;
		j--;
	}
	return ;
}
