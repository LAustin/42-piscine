/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnakle <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:12:01 by lnakle            #+#    #+#             */
/*   Updated: 2017/11/12 22:18:11 by lnakle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "rush2.h"

char	*dimensions(int *col, int *row)
{
	char	input;
	char	*str;
	int		i;
	int		c;

	i = 0;
	c = 0;
	str = (char*)malloc(sizeof(char) * 1000000000);
	while ((read(0, &input, 1)))
	{
		*col = c;
		if (input == '\n')
		{
			c = 0;
			((*row)++);
		}
		else
			c++;
		str[i] = input;
		i++;
	}
	str[i] = '\0';
	return (str);
}

void	print(int row, int col, int i, int count)
{
	if (count >= 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(i);
	ft_putstr("] [");
	ft_putnbr(col);
	ft_putstr("] [");
	ft_putnbr(row);
	ft_putstr("]");
}

void	numberofrush(char *str, int col, int row)
{
	int c;

	c = 0;
	if (ft_strcmp(str, rush00str(col, row)) == 0)
		print(row, col, 0, c++);
	if (ft_strcmp(str, rush01str(col, row)) == 0)
		print(row, col, 1, c++);
	if (ft_strcmp(str, rush02str(col, row)) == 0)
		print(row, col, 2, c++);
	if (ft_strcmp(str, rush03str(col, row)) == 0)
		print(row, col, 3, c++);
	if (ft_strcmp(str, rush04str(col, row)) == 0)
		print(row, col, 4, c++);
	if (c == 0)
		ft_putstr("none\n");
}

int		main(void)
{
	int		col;
	int		row;
	char	*str;

	row = 0;
	col = 0;
	str = dimensions(&col, &row);
	if ((row * col >= 1000000000) || (col == 0) || (row == 0))
	{
		ft_putstr("none\n");
		return (1);
	}
	numberofrush(str, col, row);
	ft_putchar('\n');
	return (0);
}
