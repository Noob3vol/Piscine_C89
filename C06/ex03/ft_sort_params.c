/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 04:35:47 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/13 04:35:49 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_tab(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (++i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return ;
}

int		main(int argc, char **argv)
{
	int	i;
	int j;
	int w;

	i = 0;
	while (++i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			w = 0;
			while (argv[i][w] == argv[j][w] && argv[i][w])
				w++;
			if (argv[i][w] > argv[j][w])
			{
				argv[0] = argv[i];
				argv[i] = argv[j];
				argv[j] = argv[0];
			}
			j++;
		}
	}
	ft_print_tab(argc, argv);
	return (0);
}
