/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/29 16:21:14 by laustin           #+#    #+#             */
/*   Updated: 2017/10/29 18:46:06 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	sastantua(int size)
{
	int block;
	int row;
	int c;
	int maxc;
	int n;
	int num;
	int maxcincrement;

	maxcincrement = 2;
	c = '*';
	n = '\n';
	block = 0;
	row = 0;	
	maxc = 3;
	num = 0;
	
	if (size < 0)
		return;
	while (block < size)
	{
		row = 0;
		while (row < block + 3)
		{
			while (num <  maxc)
			{
				write(1, &c, 1);
				num++;
			}
			maxc += 2;
			num = 0;
			write(1, &n, 1);
			row++;
		}
		write(1, &n, 1);
		if (block % 2 == 0)
			maxcincrement += 2;
		maxc +=  maxcincrement;
		printf("%i", maxcincrement);
		block++;
	}
}
