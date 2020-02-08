/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:37:40 by iguidado          #+#    #+#             */
/*   Updated: 2019/08/30 15:43:23 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int stock;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j++ < size - 1)
		{
			if (tab[i] > tab[j])
			{
				stock = tab[i];
				tab[i] = tab[j];
				tab[j] = stock;
				j = i;
			}
		}
		i++;
	}
	return ;
}
