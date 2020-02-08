/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 02:13:22 by iguidado          #+#    #+#             */
/*   Updated: 2020/02/08 06:12:34 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd;
	int		readed;
	char	buff[1024];

	if (ac == 1)
		return (write(1, "File name missing.\n", 18));
	if (ac > 2)
		return (write(1, "Too many arguments.\n", 19));
	if ((fd = open(av[1], O_RDONLY, 0)) == -1)
		return (write(1, "cannot read file.", 18));
	while ((readed = read(fd, buff, 1024)) > 0)
	{
		write(1, buff, readed);
	}
	close(fd);
	return (0);
}
