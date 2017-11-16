/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:37:26 by laustin           #+#    #+#             */
/*   Updated: 2017/11/15 15:08:22 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	draw_square(t_board *board)
{
	int *sq_arr;
	int i;
	int j;

	sq_arr = square_arr(board->max_val_pos, board->max_val, board->b_width);
	i = 0;
	while (board->str_board[i])
	{
		j = 0;
		while (j < (board->max_val * board->max_val))
		{
			if (i == sq_arr[j])
				break ;
			j++;
		}
		if (i == sq_arr[j] && j < (board->max_val * board->max_val))
			ft_putchar(board->full_char);
		else
			ft_putchar(board->str_board[i]);
		i++;
	}
}

int		*square_arr(int pos, int max_val, int width)
{
	int row;
	int sq_len;
	int i;
	int *sq_pos;

	i = 0;
	sq_len = max_val * max_val;
	sq_pos = malloc(sizeof(int) * sq_len);
	while (i < sq_len)
	{
		row = 0;
		while (row < max_val)
		{
			sq_pos[i] = pos - row;
			row++;
			i++;
		}
		pos = pos - (width + 1);
	}
	return (sq_pos);
}
