/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enennige <enennige@student.42.us.or>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:14:38 by enennige          #+#    #+#             */
/*   Updated: 2017/11/15 18:25:01 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	t_board *board;
	char	**maps;
	int		i;

	maps = get_maps(argc, argv);
	i = 0;
	while (maps[i] != 0)
	{
		if (i != 0)
			ft_putchar('\n');
		if (input_is_valid(maps[i]) == 0)
		{
			ft_puterror("map error\n");
		}
		else
		{
			board = init_board(maps[i]);
			set_max_val(&board);
			draw_square(board);
		}
		i++;
	}
	return (0);
}
