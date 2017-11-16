/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 15:55:35 by laustin           #+#    #+#             */
/*   Updated: 2017/10/28 15:55:39 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int maxx, int maxy)
{
	int x;
	int y;

	y = maxy;
	x = maxx;
	while (y > 0 && x > 0)
	{
		while (x > 0)
		{
			if ((x > 1 && x < maxx) && (y > 1 && y < maxy))
				ft_putchar(' ');
			else if ((x == 1 && y == 1 && x != maxx && y != maxy))
				ft_putchar('/');
			else if (x == maxx && y == maxy)
				ft_putchar('/');
			else if ((x == 1 && y == maxy) || (x == maxx && y == 1))
				ft_putchar(92);
			else
				ft_putchar('*');
			x--;
		}
		x = maxx;
		ft_putchar('\n');
		y--;
	}
}
