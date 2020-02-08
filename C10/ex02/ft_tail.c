
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 07:03:21 by iguidado          #+#    #+#             */
/*   Updated: 2020/02/08 07:13:41 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <libgen.h>
#include <sys/errno.h>
#define	BUFFER_SIZE 30000

typedef struct	s_stack
{
	char	*str;
	t_stack	*previous;
}				t_stack;

void	add_stack(t_stack **wordlist, char *str)
{
	t_stack *new;

	new = malloc(sizeof(t_stack) * tail);
	
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_puterr(char *filename, char *str_erro)
{
			write(1, "cat: ", 5);
			ft_putstr(basename(filename));
			write(1, ": ", 2);
			ft_putstr(strerror(errno));
			write(1, "\n", 1);
}

int		ft_count_n(char *str)
{
	int i;
	int count;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			count++;
		i++;
	}
	return (count);
}

char	*ft_strrealloc(char *str, int length)
{
	char *new;
	

}

int		main(int ac, char **av)
{
	int		fd;
	int		i;
	int		readed;
	char	buff[BUFFER_SIZE];

	if (ac == 1)
		while ((readed = read(0, buff, 1024)))
			write(1, buff, readed);
	i = 1;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY, 0)) == -1)
			ft_puterr(av[i], strerror(errno));
		else
		{
			while ((readed = read(fd, buff, BUFFER_SIZE)) > 0)
				write(1, buff, readed);
			close(fd);
		}
		i++;
	}
	return (0);
}
