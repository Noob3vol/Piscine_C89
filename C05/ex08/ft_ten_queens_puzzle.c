/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iguidado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:33:13 by iguidado          #+#    #+#             */
/*   Updated: 2019/09/18 14:50:44 by iguidado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_preset_board(char board[10])
{
	int i;

	i = 0;
	while (i < 10)
	{
		board[i] = '.';
		i++;
	}
	return ;
}

int		ft_is_valid(char pos1, char pos2, int scale)
{
	char diag_left;
	char diag_right;

	diag_left = pos2 - scale;
	diag_right = pos2 + scale;
	if (pos1 == pos2 || pos1 == diag_left || pos1 == diag_right)
		return (0);
	return (1);
}

int		ft_check_pos(char board[10], int pos_x, char pos_y)
{
	int diag_i;

	diag_i = 1;
	while (pos_x >= 0)
	{
		if (!ft_is_valid(board[pos_x], pos_y, diag_i))
			return (0);
		pos_x--;
		diag_i++;
	}
	return (1);
}

int		ft_backtrack_queen(char board[10], int pos_x, int *solutions)
{
	char pos_y;

	if (pos_x == 10)
	{
		write(1, board, 10);
		write(1, "\n", 1);
		(*solutions)++;
		return (1);
	}
	pos_y = '0';
	while (pos_y < ':')
	{
		if (ft_check_pos(board, pos_x - 1, pos_y))
		{
			board[pos_x] = pos_y;
			ft_backtrack_queen(board, pos_x + 1, solutions);
			board[pos_x] = '.';
		}
		pos_y++;
	}
	return (0);
}

int		ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		solutions;

	solutions = 0;
	ft_preset_board(board);
	ft_backtrack_queen(board, 0, &solutions);
	return (solutions);
}
