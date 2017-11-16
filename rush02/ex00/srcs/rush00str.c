/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:04:11 by laustin           #+#    #+#             */
/*   Updated: 2017/11/12 20:26:30 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	rush00char(int maxx, int maxy, int x, int y)
{
	char c;

	if ((x > 1 && x < maxx) && (y > 1 && y < maxy))
		c = ' ';
	else if ((x == 1 && y == 1) || (x == maxx && y == maxy)
		|| (x == maxx && y == 1) || (x == 1 && y == maxy))
		c = 'o';
	else if ((y == 1) || (y == maxy))
		c = '-';
	else
		c = '|';
	return (c);
}

char	*rush00str(int maxx, int maxy)
{
	int		x;
	int		y;
	char	*str;
	int		i;

	x = maxx;
	y = maxy;
	i = 0;
	str = (char *)malloc(sizeof(char) * (1000000000));
	while (y > 0 && x > 0)
	{
		while (x > 0)
		{
			str[i] = rush00char(maxx, maxy, x, y);
			i++;
			x--;
		}
		x = maxx;
		str[i] = '\n';
		i++;
		y--;
	}
	return (str);
}
