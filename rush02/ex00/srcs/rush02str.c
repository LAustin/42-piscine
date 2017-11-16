/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <laustin@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 19:13:34 by laustin           #+#    #+#             */
/*   Updated: 2017/11/12 20:27:14 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	rush02char(int maxx, int maxy, int x, int y)
{
	char c;

	if ((x > 1 && x < maxx) && (y > 1 && y < maxy))
		c = ' ';
	else if ((x == 1 && y == 1) || ((x == maxx) && (y == 1)))
		c = 'A';
	else if ((x == 1 && y == maxy) || (x == maxx && y == maxy))
		c = 'C';
	else
		c = 'B';
	return (c);
}

char	*rush02str(int maxx, int maxy)
{
	int		x;
	int		y;
	char	*str;
	int		i;

	x = 1;
	y = 1;
	i = 0;
	str = (char *)malloc(sizeof(char) * (1000000000));
	while (y < (maxy + 1) && x < (maxx + 1))
	{
		while (x < (maxx + 1))
		{
			str[i] = rush02char(maxx, maxy, x, y);
			i++;
			x++;
		}
		x = 1;
		str[i] = '\n';
		i++;
		y++;
	}
	str[i] = '\0';
	return (str);
}
