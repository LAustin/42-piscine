/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_squares.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:25:11 by laustin           #+#    #+#             */
/*   Updated: 2017/11/15 12:27:45 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		*get_num_arr(char *str, char obst, int b_width, int length)
{
	int	*num_arr;
	int	i;
	int	*index;

	i = 0;
	num_arr = malloc(sizeof(int) * (length));
	index = malloc(sizeof(int) * (3));
	while (i < length)
	{
		if (str[i] == obst)
			num_arr[i] = 0;
		else if (str[i] == '\n')
			num_arr[i] = 0;
		else
		{
			get_cmp_indices(i, b_width, &index);
			num_arr[i] = (min_val(num_arr, index[0], index[1], index[2]));
		}
		i++;
	}
	free(index);
	return (num_arr);
}

void	set_max_val(t_board **board)
{
	int		pos;
	int		*arr;
	int		length;
	char	*str;

	str = (*board)->str_board;
	length = ft_strlen(str);
	arr = get_num_arr(str, (*board)->obst_char, (*board)->b_width, length);
	pos = 0;
	(*board)->max_val = max_val(arr, length);
	while (arr[pos] != (*board)->max_val)
		pos++;
	(*board)->max_val_pos = pos;
	free(arr);
}

int		max_val(int *arr, int len)
{
	int i;
	int max;

	i = 0;
	max = 0;
	while (i < len)
	{
		if (arr[i] > max)
			max = arr[i];
		i++;
	}
	return (max);
}

void	get_cmp_indices(int position, int width, int **indices)
{
	int left;
	int top;
	int diag;

	left = position - 1;
	(*indices)[0] = left;
	top = position - width - 1;
	(*indices)[1] = top;
	diag = position - width - 2;
	(*indices)[2] = diag;
}

int		min_val(int *arr, int nb, int nb2, int nb3)
{
	if (nb < 0 || nb2 < 0 || nb3 < 0)
		return (1);
	if (arr[nb] <= arr[nb2] && arr[nb] <= arr[nb3])
		return (arr[nb] + 1);
	else if (arr[nb2] <= arr[nb] && arr[nb2] <= arr[nb3])
		return (arr[nb2] + 1);
	else
		return (arr[nb3] + 1);
}
