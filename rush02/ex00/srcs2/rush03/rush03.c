/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dperera <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 18:43:35 by dperera           #+#    #+#             */
/*   Updated: 2017/11/12 22:11:58 by lnakle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "makerush.h"

void	kindofborder(int x, int n)
{
	if (x == 0 || x == n - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar('B');
	}
}

void	corner(int x, int y, int n)
{
	if ((y == 0 && (x == n - 1 || x == 0)))
	{
		if (x == 0)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('C');
		}
	}
}

void	notenoughlines(int x, int y, int n, int m)
{
	if (y == m - 1 && (x == 0 || x == n - 1))
	{
		if (x == 0)
		{
			ft_putchar('A');
		}
		else
		{
			ft_putchar('C');
		}
	}
	else
	{
		kindofborder(x, n);
	}
}

void	border(int x, int y, int n, int m)
{
	while (x < n)
	{
		if (x == 0 || y == 0 || x == n - 1 || y == m - 1)
		{
			if ((x == 0 || x == n - 1) && y == 0)
			{
				corner(x, y, n);
			}
			else
			{
				notenoughlines(x, y, n, m);
			}
		}
		else
		{
			ft_putchar(' ');
		}
		x++;
	}
}

void	rush(int n, int m)
{
	int x;
	int y;

	y = 0;
	if (n == 1 && m == 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
	{
		while (y < m)
		{
			x = 0;
			border(x, y, n, m);
			ft_putchar('\n');
			y++;
		}
	}
}
