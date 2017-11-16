/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laustin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/01 21:49:06 by laustin           #+#    #+#             */
/*   Updated: 2017/11/01 23:39:34 by laustin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int length;
	int count;

	length = (max - min);
	*range = (int*)malloc(sizeof(int) * length);
	if (*range)
	{
		count = 0;
		while (count < length)
		{
			range[0][count] = (min + count);
			count++;
		}
		return (length);
	}
	return (0);
}
